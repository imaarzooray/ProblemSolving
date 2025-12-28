#include<iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout<<"Enter the elements in the Matrix: ";
    int matrix[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int counter  =0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(i==j)
          {
            counter = counter + matrix[i][j];
          }
        }
    }

    cout<<"The trace of the Matrix: "<<counter;


    return 0;
}