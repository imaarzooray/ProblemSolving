#include <iostream>
using namespace std;

int sum, count, resp;

// int memo[5];

// int t = 0;



// int linearSearch(int *arr, int track)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == track)
//         {
//             return 1;
//         }
//     }
// }

int fibb(int n)
{

    // resp  =linearSearch(memo,n);
    // if(resp==1)
    // {
    //     return n;
    // }
    count++;
    if (n < 0)
    {
        printf("Invalid Input!");
        exit(0);
    }
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    sum = fibb(n - 1) + fibb(n - 2);

    // memo[t] = sum;
    // t = t + 1;
    return sum;
}

int main(int argv, char *argc[])
{

    cout << "Enter the value of the counter: ";
    int counter;
    cin >> counter;

    int result = fibb(counter);

    cout << "The fibb functio is called " << count << " times.";
    cout << "\nThe value of the " << counter << " term is: " << result;

    return 0;
}