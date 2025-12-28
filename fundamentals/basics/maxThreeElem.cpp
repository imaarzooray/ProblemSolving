#include<iostream>
using namespace std;

int main(int argv, char *argc[])
{
    cout<<"Enter the three elements: ";;
    int num1, num2, num3;

    cin>>num1>>num2>>num3;


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

    cout<<greatest;
    

    return 0;
}