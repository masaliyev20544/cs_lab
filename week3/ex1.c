#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int main (void) {

    int x1 = 2;
    int x, n, y, y2;
    scanf("%d", &n);
    x = x1 + (n - 1 ) * 3;

if (n == 1) {
    puts("The sum is 2");
} else if (n > 1) {
    y = (2*x1 + 3*(n-1))/2*n;
     
     if (n % 2 == 1)
        printf("The sum is %d", y);
    else {
        y = y + (n/2);
        printf("The sum is %d", y); } 
}
}