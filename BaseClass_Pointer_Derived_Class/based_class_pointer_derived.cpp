#include <iostream>
using namespace std;

class Base
{
public:
    void func1()
    {
        cout << "Hello from BASE" << endl;
    }
};

class Derived : public Base
{
public:
    void func2()
    {
        cout << "Hello from Derived" << endl;
    }
};

class BasicCar
{
public:
    void start()
    {
        cout << "Basic run" << endl;
    }
};

class AdvanceCar
{
public:
    void playMusic()
    {
        cout << "Music" << endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->func1();
    /**
    ptr->func2(); // Wrong
    **/
    return 0;
}