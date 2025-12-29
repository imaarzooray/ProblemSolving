

// Swapping the two variable value with the help of third variable
#include <iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout << "Enter the two number: ";
    int num1, num2;

    cin >> num1 >> num2;

    cout<<"Current Values: \n";
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    
    cout<<"\nAfter Swapping: \n";
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2;

    return 0;
}