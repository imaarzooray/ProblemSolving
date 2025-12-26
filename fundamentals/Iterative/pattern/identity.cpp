#include<iostream>

using namespace std;


/*

IDENTITY MATRIX
1 * * * * * 
* 1 * * * *
* * 1 * * *
* * * 1 * *
* * * * 1 *
* * * * * 1
*/
int main(void)
{


    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i==j )
            {

                cout<<"1 ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<"\n";
    }

    return 0;
}