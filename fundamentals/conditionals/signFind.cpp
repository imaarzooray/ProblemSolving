#include<iostream>
using namespace std;

int main(int argv, char *argc[]){
    
    cout<<"Enter the Number: ";
    int number;
    cin>>number;

    if(number>0)
    {
        cout<<number<<" is Positive!";
    }
    else if(number<0){
        cout<<number<<" is Negative!";
    }
    else{
        cout<<number<<" is NIL!";
    }
    return 0;
}