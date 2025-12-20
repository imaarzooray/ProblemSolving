#include<iostream>
using namespace std;
int  main(){
    int i,j;

    //outer loop - column
    for(i=0;i<5;i++){

        //innerloop - row
        for(j=0;j<=i;j++){

            cout<<"* ";
        }
        cout<<"\n";
    }


   
    return 0;
}