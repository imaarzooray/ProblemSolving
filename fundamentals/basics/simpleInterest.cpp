#include<iostream>
using namespace std;

int main(int argv, char *argc[])
{
    cout<<"Enter the following:\n";
    float principal, time, rate;

    cout<<"Principal: ";
    cin>>principal;

    cout<<"Rate: ";
    cin>>rate;

    cout<<"Time: ";
    cin>>time;

    float interest = (principal*rate*time)/100.0;
    cout<<"Interest: "<<interest;
    return 0;
}