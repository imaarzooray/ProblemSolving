#include<iostream>
using namespace std;

int main(void){

    cout<<"Enter a number: ";
    int num;
    cin>>num;


    int ref = num;

    int rem =0,reverse =0;


    while(num!=0)
    {
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }

    cout<<"Reverse: "<<reverse<<"\n";

    // if(reverse==ref){
    //     cout<<ref<<" is a Palindrome Number!";
    // }
    // else{
    //     cout<<ref<<" is Not a Palindrome Number!";
    // }

    reverse==ref ? cout<<ref<< "is a PALINDROME number....!" : cout<<ref<<" is not a PALINDROME number....!";

    return 0;
}