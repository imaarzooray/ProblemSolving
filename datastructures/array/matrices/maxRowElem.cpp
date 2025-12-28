#include<iostream>
using namespace std;

int main(int argv, char *argc[])


{

    cout<<"Enter the Matrix: ";
    int matrix[3][3];


    //* Taking the inputs in the matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"[ "<<i<<", "<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }

    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"[ "<<i<<", "<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }


    

    return 0;
}