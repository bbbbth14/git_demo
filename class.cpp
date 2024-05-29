#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int math;
    int physics;
    int chemistry;

public:
    Student(int roll, string name, int math, int physics, int chemistry)
    {
        this->roll = roll;
        this->name = name;
        this->math = math;
        this->physics = physics;
        this->chemistry = chemistry;
    }

    int total()
    {
        return math + physics + chemistry;
    }

    char grade()
    {
        float avr = total() / 3;
        cout << "AVR: " << avr << endl;
        if (avr > 8.0)
        {
            return 'A';
        }
        else if (avr > 5.0 && avr < 8.0)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main()
{
    Student s(0, "Bien", 6, 5, 6);
    cout << "Total: " << s.total() << endl;
    cout << "Grade: " << s.grade() << endl;
}