#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int main(void) {
   int sum = 0;
   int n;
   scanf("%d", &n);

   for(int i = 1; i <= n; i++) {
      int x = 2 * i + 1;
      sum += x;
   } 
   printf("The sum --> %d", sum);
}