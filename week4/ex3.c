#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int main(void) {
   float sum = 0;
   int n;
   scanf("%d", &n);

   for(int i = 1; i <= n; i++) {
      float x = pow(i, (0-1));
      sum += x;
   }
   printf("The sum is --> %.3f", sum);
}