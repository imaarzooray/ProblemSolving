#include<iostream>

using namespace std;

// Program to swap two number  - with memory referencing and all

void swapp(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


int main(int argv, char *argc[])
{


    cout<<"Enter the two numbers: ";
    int num1, num2;
    cin>>num1>>num2;



    // calling the function to swap two numbers
    swapp(&num1,&num2);

    cout<<"Num1: "<<num1<<"\nNum2: "<<num2;

    return 0;
}