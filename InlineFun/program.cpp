#include <iostream>

class Account
{
public:
    Account(double amount)
    {
        balance = amount;
    }
    double inline getBalance();
    double inline deposit(double amount);
    double inline withdraw(double amount);

private:
    double balance;
};

inline double Account::getBalance(){
    return balance;
}

inline double Account::deposit(double amount){
    balance = balance + amount;
    return balance;
}

inline double Account::withdraw(double amount){
    balance = balance - amount;
    return balance;
}

int main()
{
    Account account(15000);
    std::cout<<account.getBalance()<<"\n";
    std::cout<<account.deposit(3000)<<"\n";
    std::cout<<account.getBalance()<<"\n";
    std::cout<<account.withdraw(3000)<<"\n";
    std::cout<<account.getBalance()<<"\n";


    return 0;
}
