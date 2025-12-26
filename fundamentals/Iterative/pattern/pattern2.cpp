
/*
    Date: 03/09/2025
    *Pattern to be Printed:
    1 2 3 4 5 6 7 
    2 3 4 5 6 7
    3 4 5 6 7 
    4 5 6 7
    5 6 7
    6 7
    7

   Concept:  Nested Loop

*/ 


#include<iostream>

using namespace std;

int main()
{

    int i=0, j=0;

    // prints rows
  
    for(i=1;i<6;i++)
    {
        for(j=i;j<6;j++)
        {
            cout<<j<< " ";
        }
        cout<<endl;
    }


    return 0;
}

