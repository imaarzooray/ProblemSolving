
#include<iostream>

using namespace std;


int printer(int lowerRange, int upperRange )
{
    if(lowerRange==10){
        return lowerRange;
    }

    cout<<lowerRange<<endl;

    lowerRange++;

    printer(lowerRange=lowerRange, upperRange);
}

int main(int argv, char *argc[])
{


    printer(0,10);



    return 0;
}