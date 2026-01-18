
#include<iostream>

using namespace std;


int printer(int lowerRange, int upperRange )
{
    // Base Case
    if(lowerRange==upperRange){
        return lowerRange;
    }

    cout<<lowerRange<<endl;

    lowerRange++;

    // calling the function
    printer(lowerRange , upperRange);
}

int main(int argv, char *argc[])
{

    printer(0,100);

    return 0;
}