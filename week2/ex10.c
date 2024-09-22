#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    int radius;
        printf("Enter the radius of the circle >> ");
            scanf("%d", &radius);

    int x0, y0;
        printf("Enter the X-axis coordinate (x0) of the central point of the circle >> ");
            scanf("%d", &x0);
        printf("Enter the Y-axis coordinate (y0) of the central point of the circle >> ");
            scanf("%d", &y0);

    int x, y;
        printf("Enter the X-axis coordinate (x) of the given point>> ");
            scanf("%d", &x);
        printf("Enter the Y-axis coordinate (y) of the given point>> ");
            scanf("%d", &y);

    float d;
        d = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

if (d > radius)
    puts("The point is OUTSIDE the circle.");
else if (d == radius)
    puts("The point is ON the circle.");
else if (d < radius)
    puts("The point is INSIDE the circle.");
}