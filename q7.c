#include <stdio.h>
int findCount(int n)
{
    int count = 0;
  
    
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n = 14568;
    printf("Count of digits in %d = %d\n",
 n, findCount(n));
    return 0;
}