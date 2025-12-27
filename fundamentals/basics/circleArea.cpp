#include<iostream>
#include<cmath>

using namespace std;


int main(int argv, char *argc[])
{
    cout<<"Enter the radius of Circle: ";
    float radius =0.0;
    cin>>radius;
  

    float area = M_PI*radius*radius;

    float perimeter  = M_PI*radius*2;

    cout<<"\nThe area and perimeter of the "<<radius<<" radius Circle:\n"<<"Area: "<<area<<"\nPerimeter: "<<perimeter;


    return 0;
}