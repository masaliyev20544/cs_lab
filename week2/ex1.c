#include <stdio.h>
#include <math.h>

int main(void) {
    
    int x;
        scanf("%d", &x);
    
    int y, z, t;
        y = x * x - 2 * x + 3;
        z = x - 5;
        t = x * x + 2 * x - 3;

if (x > 0)
    printf("%d", y);
else if (x == 0)
    printf("%d", z);
else if (x < 0)
    printf("%d", t);
}