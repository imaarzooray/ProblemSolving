#include<iostream>

using namespace std;

int main(void){

    cout<<"Enter the limiting no: ";
    int limit;
    cin>>limit;

    int result = 1;
    for(int i=1;i<=limit;i++){
        cout<<result;
        result  = i*result;
        cout<<" * "<<i<<" = "<<result<<endl;
    }
    cout<<"The factorials of "<<limit<<" is: "<<result;
    return 0;
}