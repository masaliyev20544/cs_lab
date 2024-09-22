#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    int x;
        scanf("%d", &x);
    
    int y, z, t;
        y = x % 6;
        z = x % 2;
        t = x % 3;

if (y == 0)
    puts("Excellent");
else if (z == 0 || t == 0)
    puts("OK");
else 
    puts("Noo");
}