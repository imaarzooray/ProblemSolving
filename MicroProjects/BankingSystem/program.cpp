#include<iostream>
using namespace std;
class Bank{
    public:
        Bank(double initialAmount){

            balance = initialAmount;
        }
        double checkBalance();
        double depositMoney(double amount);
        double withdrawMoney(double amount);
    private:
        double balance;
};

inline double Bank::checkBalance(){
    return balance;
}

inline double Bank::depositMoney(double amount){
    balance = balance + amount;
}

inline double Bank::withdrawMoney(double amount){
    balance = balance - amount;


}


int main(){

    Bank b(200);
    cout<<"Current Bank Balance: "<<b.checkBalance();
    
    // Adding or Depositing some money to the Bank Account
    b.depositMoney(300);
    cout<<"\nAfter depositing, Bank Balance: "<<b.checkBalance();


    // Withdrawing some money from the Bank Account
    b.withdrawMoney(300);
    cout<<"\nAfter withdrawing, Bank Balance: "<<b.checkBalance();



    return 0;
}