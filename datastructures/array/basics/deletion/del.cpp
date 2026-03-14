#include <iostream>
using namespace std;

int main()
{

    // default or maximum size of the Array - 50
    int arr[50];

    int maxSize = sizeof(arr)/sizeof(int);
    printf("Enter the size of the array: ");
    int size;
    cin >> size;

    if(size<=maxSize)
    {

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
        if (delPos <= size || delPos>0)
        {
        
            deletedValue  = arr[delPos-1];
            for (int i = delPos - 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
    
            size--;
    
            cout<<"Update Array:";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
    
            cout << "The deleted value is: " <<deletedValue;
        }
        else{
            cout<<"Invalid Position!";
        }
    }
    else{
        cout<<"Invalid Array Size!";
    }


    return 0;
}