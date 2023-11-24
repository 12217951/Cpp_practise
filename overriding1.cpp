#include <iostream>

// Base class
class Animal {
public:
    // Virtual function to be overridden by derived classes
    virtual void makeSound() const {
        std::cout << "Some sound from the animal" << std::endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    // Override the makeSound function from the base class
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Derived class inheriting from Animal
class Cat : public Animal {
public:
    // Override the makeSound function from the base class
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Call overridden functions through base class pointers
     Animal* animalPtr1 = &myDog;
     Animal* animalPtr2 = &myCat;

    animalPtr1->makeSound(); // Output: Woof! Woof!
    animalPtr2->makeSound(); // Output: Meow! Meow!

    return 0;
}
