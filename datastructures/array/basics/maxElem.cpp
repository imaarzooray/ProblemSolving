
#include <iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout << "Enter the elements in the array: \n";
    int arr[6];

    // taking inputs in the array

    for (int i = 0; i < 6; i++)
    {
        cout << "[" << i << "]: ";
        cin >> arr[i];
    }

    //* checking the maximum
    int refMax = 0;
    int elem = 0;

    for (int i = 0; i < 6; i++)
    {
        refMax =0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] >= arr[j])
            {
                refMax++;
            }

        }
        if(refMax==6)
        {
            elem = arr[i];
            break;
        }

    }

    cout<<"Largest Element: "<<elem;
    return 0;
}