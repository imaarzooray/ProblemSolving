#include <iostream>
using namespace std;

int main(int argv, char *argc[])
{

    cout << "Enter the element in the Array: \n";

    int arr[6];

    // taking input element
    for (int i = 0; i < 6; i++)
    {
        cout << "[" << i << "]: ";
        cin >> arr[i];
    }

    int elem = 0;
    int refElem = 0;

    for (int i = 0; i < 6; i++)
    {
        refElem = 0;

        for (int j = 0; j < 6; j++)
        {
            if (arr[i] < arr[j])
            {
                refElem = refElem + 1;
            }

            if (refElem == 5)
            {
                elem = arr[i];
                break;
            }
        }
    }

    cout<<"Smallest Element: "<<elem;

    return 0;
}