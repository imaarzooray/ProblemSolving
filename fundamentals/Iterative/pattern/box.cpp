#include<iostream>

using namespace std;

/*
* * * * * *
*
*
*
*
* * * * * *



*/

int main(void)
{

    // outer loop
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if((i==0 || i==5)||(j==0 || j==5))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    return 0;
}