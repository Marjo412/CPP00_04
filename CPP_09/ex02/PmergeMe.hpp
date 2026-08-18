#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <climits>
#include <utility>
#include <vector>
#include <deque>
#include <ctime>

# define GREEN "\001\033[1;32m\002"
# define MAG  "\001\033[1;35m\002"
# define BLUE "\001\033[1;93m\002"
# define RED "\001\033[0;31m\002"

class PmergeMe
{
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe& operator=(const PmergeMe &copy);
		~PmergeMe();

		void parseInput(char **argv);
		std::vector<size_t> jacobsthalSequence(size_t size) const;

		//Vector functions
		void displayVector() const;
		void fordJohnsonVector(std::vector<int> &vec);
		void sortVector();

		//Deque functions
		void displayDeque() const;
		void fordJohnsonDeque(std::deque<int> &deq);
		void sortDeque();
};

#endif

/*
Entrée
      │
      ▼
Création des paires
      │
      ▼
Petits        Grands
      │          │
      │      récursion
      │          ▼
      │    main chain triée
      │          │
      └──────────┘
           ▼
      pend chain
           ▼
 Insertion selon Jacobsthal
           ▼
    Séquence finale triée
*/