
#include<iostream>
using namespace std;

//global variable
int sum;

static int count;

int fibbo(int n)
{
    count = count + 1;
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

    cout<<"The sum of "<<counter<<" terms is: "<<result;

    cout<<"\nRecursive function is called "<<count<<" times!";



    return 0;
}