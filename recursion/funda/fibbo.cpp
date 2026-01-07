
#include <iostream>
using namespace std;

int sum;

int fibbo(int n)
{
    if (n < 0)
    {
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

    sum = fibbo(n - 1) + fibbo(n - 2);
    return sum;
}

int main(int argv, char *argc[])
{

    int result = 0;

    int counter;
    printf("Enter the counter value: ");
    scanf("%d",&counter);

    result =fibbo(counter) + fibbo(counter-1); 

    printf("%d",result);

    return 0;
}
// 0 1 1 2 3 