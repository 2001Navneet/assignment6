#include <stdio.h>

int getOddSum(int n)
{
    int sum = 0, count = 0;

    for (int i = 1;; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            count++;
        }
        if (count == n)
            break;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the value value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d odd numbers is: %d\n", n, getOddSum(n));
}