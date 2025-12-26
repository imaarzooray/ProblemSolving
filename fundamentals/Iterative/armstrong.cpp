#include<iostream>
using namespace std;

int main(void){
    
    cout<<"Enter the 3 digit number: ";
    int num;
    int ref = 0;
    cin>>num;

    
    int sum = 0,rem =0;

    ref = num;
    while(num!=0)
    {

        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }

    
    cout<<"Sum: "<<sum<<"\n";

    sum==ref ? cout<<ref<<" is a 3 digit ARMSTRONG number..." : cout<<ref<<" is not a ARMSTRONG number....";
    return 0;
}