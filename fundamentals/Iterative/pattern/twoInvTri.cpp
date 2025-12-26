#include<iostream>
using namespace std;



/*

* * * * * * 
* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *
* * * * * *

*/
int main(void)
{


    // ? UPPER inverted triangle
    for(int i=0;i<6;i++)
    {
        for(int j=6;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    // ? LOWER triangle
     for(int i=1;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}