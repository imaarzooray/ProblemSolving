#include<iostream>
using namespace std;

int main(int argv, char *argc[])
{
    cout<<"Enter the temprature: ";
    float temp;
    cin>>temp;

 

    // * interesting
    float tempCel = (temp - 32)*(5.0/9.0);

    cout<<temp<<" F = "<<tempCel<<" C";
    return 0;
}