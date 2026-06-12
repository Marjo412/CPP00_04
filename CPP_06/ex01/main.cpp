#include "Serializer.hpp"

int main()
{
    //data creation
    Data data;
    data.value = 42;
    data.name = "hello";

    Data* ptr = &data;

    uintptr_t raw = Serializer::serialize(ptr);
    Data* newPtr = Serializer::deserialize(raw);

    std::cout << "Original pointer: " << ptr << std::endl;
    std::cout << "Deserialized pointer: " << newPtr << std::endl;

    if (ptr == newPtr)
        std::cout << "\n✅ Pointers are equal" << std::endl;
    else
        std::cout << "❌ Pointers are NOT equal" << std::endl;

    // Vérification des données
    std::cout << "Value: " << newPtr->value << std::endl;
    std::cout << "Name: " << newPtr->name << std::endl;

    // std::cout << "\n----- DYNAMIC OBJECT TEST -----" << std::endl;

    // Data* d = new Data;
    // d->value = 100;
    // d->name = "test";

    // uintptr_t raw2 = Serializer::serialize(d);
    // Data* ptr2 = Serializer::deserialize(raw2);

    // std::cout << "\nDynamic test: " << ptr2->value << " " << ptr2->name << std::endl;

    // delete d;

    // std::cout << "\n----- NULL POINTER TEST -----" << std::endl;

    // Data* nullPtr = NULL;

    // uintptr_t raw3 = Serializer::serialize(nullPtr);
    // Data* ptr3 = Serializer::deserialize(raw3);

    // if (ptr3 == NULL)
    //     std::cout << "\nNULL test OK" << std::endl;

    return 0;
}

/*It's shows that is the same memory adress, the same object so there is no information lost*/