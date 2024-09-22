#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    int a, b, c;
        printf("Enter the length of the 1st stick >> ");
            scanf("%d", &a);
        printf("Enter the length of the 2nd stick >> ");
            scanf("%d", &b);
        printf("Enter the length of the 3rd stick >> ");
            scanf("%d", &c);

    int x1, y1, z1, x, y, z;
        x1 = a + b;
            x = a - b;
        y1 = a + c;
            y = a - c;
        z1 = b + c;
            z = b - c;

    int x2 = abs(x);
    int y2 = abs(y);
    int z2 = abs(z);

if ((x2 < c && c < x1) || (y2 < b && b < y1) || (z2 < a && a < z1))
    puts("Yes.");
else
    puts("No.");
}