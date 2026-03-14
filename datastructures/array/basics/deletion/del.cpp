#include <iostream>
using namespace std;

int main()
{

    // default or maximum size of the Array - 50
    int arr[50];

    printf("Enter the size of the array: ");
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int delPos;
    cout << "\nEnter the position from which you want to delete the data:";
    cin >> delPos;

    int deletedValue;
    for (int i = delPos - 1; i < size - 1; i++)
    {
        if (i == delPos - 1)
        {
            deletedValue = arr[i];
        }

        arr[i]=arr[i+1];
    }

    size--;

    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"The deleted value is: "<<deletedValue;
    return 0;
}