
// Preprocessor directive -  including standard input ouput for cout and cin

#include<iostream>

using namespace std;



// entry of the program - main function

int main(void){

    cout<<"Enter the expression: ";
    char operate;
    int result;
    int op1,op2;

    cin>>op1;
    cin>>operate;
    cin>>op2;

   
    

    switch(operate){
        case '+':
        result = op1 + op2;
        break;
        case '-':
        result = op1 - op2;
        break;
        case '*':
        result = op1 * op2;
        break;
        case '/':
        result = op1 / op2;
        break;
        default:
        cout<<"Invalid Input!";
    }

    cout<<op1<<" "<<operate<<" "<<op2<<" = "<<result;



    return 0;
}
