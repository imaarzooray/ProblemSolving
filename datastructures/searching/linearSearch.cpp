#include<iostream>
using namespace std;
int main(void){

    int arr[10];
    cout<<"Enter the elements in the array:"<<endl;

    for(int i=0;i<10;i++){
        cout<<"["<<i<<"]: ";
        cin>>arr[i];
    }

    printf("Enter the element to search: ");
    int searchNum;
    cin>>searchNum;

    bool isFound=false;

    for(int i=0;i<10;i++){

        if(arr[i]==searchNum){
            isFound =true;
            break;
        }
    }

    isFound==true ? cout<<searchNum<<" Found!" : cout<<searchNum<<" Not found";

    return 0;
}