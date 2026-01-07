#include<iostream>
using namespace std;

int sum, count;

int fibb(int n)
{
    count++;
    if(n<0)
    {
        printf("Invalid Input!");
        exit(0);
    }
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    sum = fibb(n-1) + fibb(n-2);
    return sum;
}

int main(int argv, char *argc[])
{

    cout<<"Enter the value of the counter: ";
    int counter;
    cin>>counter;

    int result = fibb(counter) + fibb(counter-1);

    cout<<"The fibb functio is called "<<count<<" times.";
    cout<<"\nThe sum of the "<<counter<<" is: "<<result;


    return 0;
}