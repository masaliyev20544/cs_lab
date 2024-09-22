#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    int width, length, height;
        printf("Enter the width of the box >> ");
            scanf("%d", &width);
        printf("Enter the length of the box >> ");
            scanf("%d", &length);
        printf("Enter the heigth of the box >> ");
            scanf("%d", &height);

    int radius;
        printf("Enter the radius of the ball >> ");
            scanf("%d", &radius);

    int diametr;
        diametr = radius * 2;

if (diametr <= width && diametr <= length && diametr <= height)
    puts("You can send this ball to your friend using this box.");
else 
    puts("You cannot send this ball to your friend using this box.");
}