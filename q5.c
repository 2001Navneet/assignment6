#include<stdio.h>
long cubenatural(int n) {
   long sum = 0;
   int i;
   for (i = 1; i <= n; i++) {
      sum += i * i * i; 
   }
   return sum;
}
main() {
   int n;
   printf("Enter value of n: ");
   scanf("%d", &n);
   printf("Result is: %ld", cubenatural(n));
}