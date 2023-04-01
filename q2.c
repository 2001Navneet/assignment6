#include <stdio.h>

int getEvenSum(int n)
{
    int sum = 0, count = 1, i = 2;

    while (count <= n)
    {
        sum += i;
        count++;

        i += 2;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the value value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d even numbers is: %d\n", n, getEvenSum(n));
}
