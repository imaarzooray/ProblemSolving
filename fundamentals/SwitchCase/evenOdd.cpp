
/*
Date: 03/09/2025
Program: Check whether the number is Even or Odd using Switch Case Statement

*/

#include<iostream>
using namespace std;

int main()
{

    int num;

    cout<<"Enter a Number:"<<endl;
    cin>>num;

    switch (num%2)
    {
    case 0:
        cout<<num<<" is Even Number!";
        break;
    case 1:
        cout<<num<<" is Odd Number!";
        break;
    default:
        break;
    }

    return 0;
}