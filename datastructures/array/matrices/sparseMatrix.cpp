#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    cout << "Enter the elements in the Matrx [3,3]\n__________________________________\n\n";

    int matrix[3][3];
    int zeroCount = 0;

    // *row
    for (int i = 0; i < 3; i++)
    {
        //* column
        for (int j = 0; j < 3; j++)
        {

            cout << "[" << i << ", " << j << "]: ";
            cin >> matrix[i][j];
        }
        cout << "\n";
    }

    // *row
    for (int i = 0; i < 3; i++)
    {
        //* column
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroCount++;
            }

            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    if(zeroCount>=5)
    {
        cout<<"\nThat's a SPARSE MATRIX!\n";
    }
    cout<<"Number of ZERO(0): "<<zeroCount;

   

    return 0;
}