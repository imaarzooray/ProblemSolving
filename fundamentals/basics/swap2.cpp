#include<iostream>

using namespace std;

int main(int argv, char *argc[])
{
    cout<<"Enter the two number:\n";
    int num1 =0, num2=0;

    cin>>num1>>num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<num1<<" "<<num2;

    return 0;
}