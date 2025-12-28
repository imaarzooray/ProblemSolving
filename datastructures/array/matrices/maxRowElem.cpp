#include<iostream>
using namespace std;


int greatesOfThree(int num1, int num2, int num3)
{
     int greatest = 0;

    if(num1>num2){
        if(num2>num3){
            greatest = num1;
        }
        else{
            if(num3>num1)
            {
                greatest = num3;
            }
            else{
                greatest =num1;
            }
        }
    }
    else{
        if(num2>num3){
            greatest = num2;

        }
        else{
            if(num3>num1)
            {
                greatest = num3;
            }
            else{
                greatest = num1;
            }
        }
    }

    return greatest;
}

int main(int argv, char *argc[])


{

    cout<<"Enter the Matrix: \n";
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
        int temp[3];
        for(int j=0;j<3;j++)
        {
           temp[j] = matrix[i][j];
        }

       int greatest =  greatesOfThree(temp[0],temp[1],temp[2]);

       cout<<"The greatest element is: "<<greatest<<endl;
    }


    

    return 0;
}