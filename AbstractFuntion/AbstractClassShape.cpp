#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float Area() = 0;
    virtual float Perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }

    float Area()
    {
        return length * breadth;
    }
    float Perimeter()
    {
        return (length + breadth) * 2;
    }
};

int main()
{
    Shape *a = new Rectangle(2, 3);
    a->Area();
    a->Perimeter();
    cout << "Area of Rectangle " << a->Area() << endl;
    cout << "Area of Rectangle " << a->Perimeter() << endl;
    return 0;
}