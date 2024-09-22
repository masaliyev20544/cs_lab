#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    int x;
        scanf("%d", &x);
    
    int t = abs(x);
    
    int y;
        y = t % 2;

if (y == 0) 
    puts("It is an even number.");
else
    puts("It is an odd number.");
}