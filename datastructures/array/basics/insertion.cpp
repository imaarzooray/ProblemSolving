#include <iostream>
using namespace std;

int main()
{

    // Maximum size of the Array
    int arr[50], size;

    int maxSize = sizeof(arr)/sizeof(int);
 

    int post;
    cout << "Enter the position to insert: ";
    cin >> post;

    int elem;

    if(post>maxSize){
        cout<<"Overflow Condition!";
    }
    else{

        cout<<"Enter the element to insert: ";
        cin>>elem;
        arr[post] = elem;
        cout<<elem<< " inserted at position "<<post<<" Successfully!";

    }
    return 0;
}