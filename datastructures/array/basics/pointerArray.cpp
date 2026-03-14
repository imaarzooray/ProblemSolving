#include<iostream>
using namespace std;

int main(){


    int arr[4] =  {1,2,3,4};

    int size = sizeof(arr)/sizeof(int);
    // cout<<*(arr);
    // cout<<(arr  +1)<<endl;
    // * -> dereferencing operator
    // cout<<*(arr  +2)<<endl;
    // cout<<(arr  +1);


    for(int i=0;i<size;i++){
        // cout<<arr[i];
        //  
        cout<<(arr + i)<<endl;
        cout<<*(arr + i)<<endl;
    }
  
    return 0;
}