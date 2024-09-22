#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    int x;
        printf("Enter a three-digit number >> ");
            scanf("%d", &x);
    
    int y = abs(x);
    
    int a, b, c, d;
        a = y / 100;
        b = y % 10;
        c = y % 100;
        d = c / 10;

if (a == 0) 
    printf("%d", b * d);
else if (b == 0)
    printf("%d", a * d);
else if (d == 0)
    printf("%d", a * b);
else
    printf("%d", a * b * d);
}