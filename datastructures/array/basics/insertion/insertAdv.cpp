#include<iostream>
using namespace std;



int main(){

    int arr[10] = {20,3,0,-10,32};

    
    int arrSize = sizeof(arr)/sizeof(int);

    cout<<"Enter the position of the element to insert: ";
    int pos;
    cin>>pos;

    if(pos>arrSize || pos<0){
        cout<<"Overflow Condition!";
    }
    else{
        
            cout<<"Enter the element to insert: ";
            int elem;
            cin>>elem;
        
            // shift the array - time complexity is O(n)
            for(int i=arrSize-1;i>=pos;i--){
                arr[i] = arr[i-1];
            }
        
            arr[pos-1] = elem;
        
            for(int i=0;i<arrSize;i++){
                cout<<arr[i]<<" ";
            }

    }




    return 0;
}