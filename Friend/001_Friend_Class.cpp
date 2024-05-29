#include <iostream>
using namespace std;

class YourFriend;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend YourFriend;
};
class YourFriend
{
public:
    My temp;
    void demoFunc()
    {
        temp.a = 1;
        temp.b = 1;
        temp.c = 1;
        cout << temp.a << endl;
    }
};

int main()
{
    YourFriend x;
    x.demoFunc();
    return 0;
}