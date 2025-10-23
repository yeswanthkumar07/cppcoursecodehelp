#ifndef BIRD_B
#define BIRD_B

#include <iostream>

// Base abstract class
class bird {
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // Classes inheriting from bird must implement these pure virtual functions
};

// Derived class: sparrow
class sparrow : public bird {
public:
    void eat() override {
        std::cout << "Sparrow is eating\n";
    }

    void fly() override {
        std::cout << "Sparrow is flying\n";
    }
};

// Derived class: eagle
class eagle : public bird {
public:
    void eat() override {
        std::cout << "Eagle is eating\n";
    }

    void fly() override {
        std::cout << "Eagle is flying\n";
    }
};

#endif // BIRD_B
