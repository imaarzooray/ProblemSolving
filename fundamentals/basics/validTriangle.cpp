#include <iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout << "Enter the length of three side of Triangle: ";
    int a, b, c;

    cin >> a >> b >> c;

    bool isTriangle = false;
    if (((a + b) <= c) || ((a + c) <= b) || (b + c)<=a)
    {
        isTriangle = false;

    }
    else
    {
        isTriangle = true;
    }

    cout << "Triangle having side length " << a << ", " << b << ", " << c << " is ";
    isTriangle == true ? cout << "a Triangle." : cout << "not a Triangle.";

    return 0;
}