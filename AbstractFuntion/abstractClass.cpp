#include <iostream>
using namespace std;

class Base
{
public:
    virtual void func1() = 0;
    virtual void func2() = 0;
};

class Derived : public Base
{
public:
    void func1()
    {
        cout << "Hello from Derived 1" << endl;
    }
    void func2()
    {
        cout << "Hello from Derived 2" << endl;
    }
};

int main()
{
    Derived d;
    Base *a = &d;
    a->func1();
    a->func2();
    return 0;
}