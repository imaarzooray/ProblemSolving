
#include <iostream>
using namespace std;

int main(void)
{

    cout << "Enter the limiting no:";
    int limit;
    cin>>limit;

    int result = 0;
    for(int i=1;i<=limit;i++){

        cout<<result;
        result = i + result;
        cout<<" + "<<i<<" = "<<result<<endl;
    }

    cout<<"The sum of natural numbers up to "<<limit<<" : "<<result;
    return 0;
}