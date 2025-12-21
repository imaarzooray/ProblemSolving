#include <iostream>

using namespace std;

int main()
{

    int matrix1[3][3], matrix2[3][3], result[3][3];

    // taking input in the matrices

    cout<<"Enter the elements in the matrices: \n";

    // ? FIRST MATRIX
    // outerloop - row
    for (int i = 0; i < 3; i++)
    {
        // inner loop - column
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << ", " << j << "]:";
            cin >> matrix1[i][j];
        }
    }

    // ? SECOND MATRIX
    // outerloop - row
    for (int i = 0; i < 3; i++)
    {
        // inner loop - column
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << ", " << j << "]:";
            cin >> matrix2[i][j];
            
        }
    }

    // ? RESULTANT MATRIX

    cout<<"\nThe resulant matrix: \n";
    // outerloop - row
    for (int i = 0; i < 3; i++)
    {
        // inner loop - column
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout<<result[i][j]<<"    ";
        }
        cout<<endl;
    }



}