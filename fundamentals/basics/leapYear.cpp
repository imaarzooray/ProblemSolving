
#include<iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout<<"Enter the year:";
    int year;
    cin>>year;

    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        cout<<year<<" is Leap Year!";
    }
    else{
        cout<<year<<" is not a Leap Year!";
    }

    return 0;
}
