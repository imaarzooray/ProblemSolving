
#include<iostream>

using namespace std;

int main(){


    // First ask for entering a number
    cout<<"Enter the number: ";
    int num;
    cin>>num;

    int rem=0;
    int reverse = 0;

    while (num!=0)
    {
       rem =  num%10;
       reverse = rem + reverse*10;
       num = num/10;
    }
    cout<<"Reverse of "<<num<<" is: "<<reverse;
    

    // remainder, quotient, dividend - if we concatenate and multiply the 
    return 0;   
}