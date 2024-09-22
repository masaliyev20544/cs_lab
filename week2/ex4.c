#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
        printf("Enter the value for a >> ");
            scanf("%d", &a);
        printf("Enter the value for b >> ");
            scanf("%d", &b);
        printf("Enter the value for c >> ");
            scanf("%d", &c);
    
    int d;
        d = b * b - 4 * a * c;
    
    float x1, x2;
        x1 = ((-1) * b - sqrt(d)) / (2 * a);
        x2 = ((-1) * b + sqrt(d)) / (2 * a);

if (d > 0)
    printf("The roots are %.2f and %.2f.", x1, x2);
else if (d == 0)
    printf("The root is %.2f.", x1);
else if (d < 0)
    puts("There are no roots.");
}