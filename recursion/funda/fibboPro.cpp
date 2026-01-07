
#include<iostream>
using namespace std;

//global variable
int sum;

int fibbo(int n)
{
    if(n<0){
        cout<<"Invalid Input!";
    }
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    sum = fibbo(n-1) + fibbo(n-2);

    return sum;
}

int main(int argv, char *argc[])
{


    // taking the value of counter
    int counter;

    cout<<"Enter the value of counter: ";
    cin>>counter;

    // store the returned value or result

    int result = fibbo(counter) + fibbo(counter-1);

    cout<<result;



    return 0;
}