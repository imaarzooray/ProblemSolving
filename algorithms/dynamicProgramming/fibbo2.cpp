#include <iostream>
using namespace std;

int sum = 0,t =0;

int memo[5];

int linearSearch(int *arr, int track)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == track)
        {
            return track;
        }
    }
}

static int count = 0;

int fibb(int n)
{

    int temp = linearSearch(memo, n);

    if (temp == n)
    {
        return n;
    }

    count++;
    if (n < 0)
    {
        cout << "INVALID INPUT!";
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


   sum  =fibb(n - 1) + fibb(n - 2);
   memo[t] = sum;
   t = t+1;
   return sum;
}

int main(int argv, char *argc[])
{

    int counter = 0;
    cout << "Enter the value of the counter: ";
    cin >> counter;

    int result = fibb(counter);

    cout << "The value of the " << counter << " term is: " << result;
    cout << "\nThe FIBB function is called " << count << " times";

    return 0;
}
