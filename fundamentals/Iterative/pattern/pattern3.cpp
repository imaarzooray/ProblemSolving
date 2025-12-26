
/*
Date: 03/09/2025
Program:  Pascal Triangle

                *
            *   *   *
        *   *   *   *   *
    *   *   *   *   *   *   *
*   *   *   *   *   *   *   *   *


Logic: row+1 -i <= column && j< (row-1) + i
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int max_row = 6;

    for (i = 1; i < max_row; i++)
    {
        for (j = 1; j <= i + (max_row-2); j++)
        {

            if(max_row-i <= j && j< (max_row-1)+i)
            {
                
                cout<<" "<<j<<" ";
            }
            else{
                cout<<"   ";
            }

        }
        cout << endl;
    }

    return 0;
}