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

if (y == 0)
    puts("The greatest and the smallest digits are 0.");
else if (a > b && a > d && b > d)
    printf("The greatest digit is %d and the smallest digit is %d.", a, d);
else if (a > b && a > d && d > b)
    printf("The greatest digit is %d and the smallest digit is %d.", a, b);
else if (b > a && b > d && a > d)
    printf("The greatest digit is %d and the smallest digit is %d.", b, d);
else if (b > a && b > d && d > a)
    printf("The greatest digit is %d and the smallest digit is %d.", b, a);
else if (d > a && d > b && a > b)
    printf("The greatest digit is %d and the smallest digit is %d.", d, b);
else if (d > a && d > b && b > a)
    printf("The greatest digit is %d and the smallest digit is %d.", d, a);
//------------------------------------------------------------------------------
else if (a == b && a > d && b > d)
    printf("The greatest value is %d and the smallest digit is %d.", a, d);
else if (a == b && a < d && b < d)
    printf("The greatest value is %d and the smallest digit is %d.", d, a);
else if (a == d && a > b && d > b)
    printf("The greatest value is %d and the smallest digit is %d.", a, b);
else if (a == d && a < b && d < b)
    printf("The greatest value is %d and the smallest digit is %d.", b, a);
else if (d == b && d > a && b > a)
    printf("The greatest value is %d and the smallest digit is %d.", d, a);
else if (d == b && d < a && b < a)
    printf("The greatest value is %d and the smallest digit is %d.", a, d);
//------------------------------------------------------------------------------
else
    printf("The greatest and the smallest digits are %d.", a);
}