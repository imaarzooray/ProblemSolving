
#include<iostream>
using namespace std;


// Element which is FREQUENTLY 


int main(int argv, char *argc[])
{

    cout<<"Enter the elements in teh Array: \n";
    int arr[6];

    int frequency[6];

    for(int i=0;i<6;i++)
    {
        cout<<"["<<i<<"]: ";
        cin>>arr[i];
    }

    int frequenter = 0;

    int memoir;
    // taking frequency

    for(int i=0;i<6;i++)
    {
        frequenter =0;
        for(int j=0;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
               
                frequenter = frequenter + 1;
            }
        }
        frequency[i] = frequenter;
    }



    for(int i=0;i<6;i++)
    {

        cout<<frequency[i]<<" ";

    }


    

    return 0;
}