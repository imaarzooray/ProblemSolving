#include<iostream>
using namespace std;


int main(){

    int arr[20] = {10,-20,0,4,1000,908};

    int arrMaxSize = sizeof(arr)/sizeof(int);

    // cout<<arrMaxSize;


    cout<<"Enter the position of element to insert: ";
    int pos;
    cin>>pos;

    int elem;

    if(pos>arrMaxSize || pos<1){
        cout<<"Overflow Condition!";
    }
    else{
        cout<<"Enter the element:";
        cin>>elem;

        // replace -  constant time.. more optimize 
        arr[arrMaxSize-1] = arr[pos-1];

        arr[pos-1] = elem;

        cout<<elem<< " is inserted at position "<<pos<< " successfully!";


    }

    return 0;
}