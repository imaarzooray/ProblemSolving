#include<iostream>

using namespace std;

int main(void){

    /*
    *********
    *******
    */


    //OUTER LOOP - Row
    for(int i = 0;i<6;i++)
    {
        //INNER LOOP - Column
        for(int j=6;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}