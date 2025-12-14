
/*
    Date: 03/09/2025
    *Pattern to be Printed:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5 
    1 2 3 4 5 6
    1 2 3 4 5 6 7 

    Nested Loop

*/ 


#include<iostream>

using namespace std;

int main()
{

    int i=0, j=0;

    // prints rows
    for(i=1;i<6;i++)
    {
        // print column
        for(j=1;j<=i;j++)
        {
            cout<<j<< " ";
        }

        cout<<endl;
    }


    return 0;
}

