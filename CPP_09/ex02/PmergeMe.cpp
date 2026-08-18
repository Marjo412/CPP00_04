#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec), _deq(copy._deq) {}
PmergeMe& PmergeMe::operator=(const PmergeMe &copy)
{
    if (this != &copy)
    {
        _vec = copy._vec;
        _deq = copy._deq;
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(char **argv)
{
    for (int i = 1; argv[i] != NULL; i++)
    {
        char *end;

        //convertion in long to detect overflows in int
        long number = std::strtol(argv[i], &end, 10);

        //check that all the string is convert
        if (*end != '\0')
            throw std::runtime_error("Error");
        if (number < 0)
            throw std::runtime_error("Error");
        if (number > INT_MAX)
            throw std::runtime_error("Error");

        for (size_t j = 0; j < _vec.size(); j++)
        {
            if(_vec[j] == number) //check for duplicates
                throw std::runtime_error("Error");
        }
        /* Check for duplicates only in _vec because both containers
            are filled at the same time and therefore always contain
            the same values in the same order. */
        
        int value = static_cast<int>(number);//convert long to int

        _vec.push_back(value);
        _deq.push_back(value);
    }
}

/*This function returns the insertion order of the elements,
    derived from the Jacobsthal sequence.*/
std::vector<size_t> PmergeMe::jacobsthalSequence(size_t size) const
{
    std::vector<size_t> order;

    if(size == 0)
        return order;
    
    order.push_back(0);

    if (size == 1)
        return order;

    size_t j0 = 0;
    size_t j1 = 1;

    while (true)
    {
        size_t next = j1 + (2 * j0);

        if (next >= size)
            next = size;

        for (size_t i = next; i > j1; i--)
            order.push_back(i - 1);

        if (next == size)
            break;
        
        j0 = j1;
        j1 = next;
    }
    return order;
}

/* ************************ */
/*  Vector functions        */
/* ************************ */

//this function is in const because it never change _vec
void PmergeMe::displayVector() const
{
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::fordJohnsonVector(std::vector<int> &vec)
{
    if (vec.size() <= 1) //condition for the recursion to stop
        return;
    
    std::vector<std::pair<int, int> > pairs; //contains pairs
    std::vector<int> mainChain; //contains biggest elements
    std::vector<std::pair<int, int> > pend; //contains smaller elements

    //Handle alone element
    bool hasAlone = false;
    int alone = 0;

    for (size_t i = 0; i < vec.size(); i += 2)
    {
        if (i + 1 < vec.size()) //check if there is a second element
        {
            if (vec[i] < vec[i + 1]) //compare the pair
                pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
            else
                pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
        }
        else
        {
            hasAlone = true;
            alone = vec[i];
        }
    }
    //Separation of the smallest and biggest
    for (size_t i = 0; i < pairs.size(); i++)
    {
        pend.push_back(pairs[i]);
        mainChain.push_back(pairs[i].second);
    }
    fordJohnsonVector(mainChain); //recursive sorting of the biggest

    //Reconstruction begins
    std::vector<int> result;
    size_t firstPair = 0;

    if (!mainChain.empty())
    {
        for (size_t i = 0; i < pend.size(); i++)
        {
            if (pend[i].second == mainChain[0])
            {
                result.push_back(pend[i].first);
                result.push_back(pend[i].second);
                firstPair = i;
                break;
            }
        }
    }
    //Add all biggest
    for (size_t i = 1; i < mainChain.size(); i++)
        result.push_back(mainChain[i]);

    std::vector<size_t> order = jacobsthalSequence(pend.size());

    //Inserting elements of pend
    for (size_t k = 0; k < order.size(); k++)
    {
        size_t i = order[k];

        if(i >= pend.size())
            continue;

        if (i == firstPair)
            continue;

        size_t left = 0;
        size_t right = result.size();

        //Searching for the partner's position
        for (size_t j = 0; j < result.size(); j++)
        {
            if (result[j] == pend[i].second)
            {
                right = j + 1;
                break;
            }
        }
        // binary search
        while (left < right)
        {
            size_t middle = (left + right) / 2;

            if (pend[i].first < result[middle])
                right = middle;
            else
                left = middle + 1;
        }
        result.insert(result.begin() + left, pend[i].first);
    }
    //inserting alone element using binary search
    if (hasAlone)
    {
        size_t left = 0;
        size_t right = result.size();

        while (left < right)
        {
            size_t middle = (left + right) / 2;

            if (alone < result[middle])
                right = middle;
            else
                left = middle + 1;
        }
        result.insert(result.begin() + left, alone);
    }
    vec = result;
}

void PmergeMe::sortVector()
{
    fordJohnsonVector(_vec);
}

/* ************************ */
/*  Deque functions        */
/* ************************ */

void PmergeMe::displayDeque() const
{
    for (size_t i = 0; i < _deq.size(); i++)
        std::cout << _deq[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::fordJohnsonDeque(std::deque<int> &deq)
{
    if (deq.size() <= 1) //condition for the recursion to stop
        return;
    
    std::vector<std::pair<int, int> > pairs; //contains pairs
    std::deque<int> mainChain; //contains biggest elements
    std::vector<std::pair<int, int> > pend; //contains smaller elements

    //Handle alone element
    bool hasAlone = false;
    int alone = 0;

    for (size_t i = 0; i < deq.size(); i += 2)
    {
        if (i + 1 < deq.size()) //check if there is a second element
        {
            if (deq[i] < deq[i + 1]) //compare the pair
                pairs.push_back(std::make_pair(deq[i], deq[i + 1]));
            else
                pairs.push_back(std::make_pair(deq[i + 1], deq[i]));
        }
        else
        {
            hasAlone = true;
            alone = deq[i];
        }
    }
    //Separation of the smallest and biggest
    for (size_t i = 0; i < pairs.size(); i++)
    {
        pend.push_back(pairs[i]);
        mainChain.push_back(pairs[i].second);
    }
    fordJohnsonDeque(mainChain); //recursive sorting of the biggest

    //Reconstruction begins
    std::deque<int> result;
    size_t firstPair = 0;

    if (!mainChain.empty())
    {
        for (size_t i = 0; i < pend.size(); i++)
        {
            if (pend[i].second == mainChain[0])
            {
                result.push_back(pend[i].first);
                result.push_back(pend[i].second);
                firstPair = i;
                break;
            }
        }
    }
    //Add all biggest
    for (size_t i = 1; i < mainChain.size(); i++)
        result.push_back(mainChain[i]);

    std::vector<size_t> order = jacobsthalSequence(pend.size());

    //Inserting elements of pend
    for (size_t k = 0; k < order.size(); k++)
    {
        size_t i = order[k];

        if(i >= pend.size())
            continue;

        if (i == firstPair)
            continue;

        size_t left = 0;
        size_t right = result.size();

        //Searching for the partner's position
        for (size_t j = 0; j < result.size(); j++)
        {
            if (result[j] == pend[i].second)
            {
                right = j + 1;
                break;
            }
        }
        // binary search
        while (left < right)
        {
            size_t middle = (left + right) / 2;

            if (pend[i].first < result[middle])
                right = middle;
            else
                left = middle + 1;
        }
        result.insert(result.begin() + left, pend[i].first);
    }
    //inserting alone element using binary search
    if (hasAlone)
    {
        size_t left = 0;
        size_t right = result.size();

        while (left < right)
        {
            size_t middle = (left + right) / 2;

            if (alone < result[middle])
                right = middle;
            else
                left = middle + 1;
        }
        result.insert(result.begin() + left, alone);
    }
    deq = result;
}

void PmergeMe::sortDeque()
{
    fordJohnsonDeque(_deq);
}

/*
** mainChain = les grands triés.
    result = la chaîne que l'on est en train de construire.
*/