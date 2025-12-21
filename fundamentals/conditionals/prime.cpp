#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number:";
    int num;
    cin>>num;

    bool isPrime=false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime = true;
        }
    }

    if(isPrime==false){
        cout<<num<<" is a Prime Number.";
    }
    else{
        cout<<num<<" is a Composite Number.";
    }
    return 0;
}