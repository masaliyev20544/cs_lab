#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int main() {
    int n; 
    float num, sum = 0; 

    printf("Enter the number of floating-point numbers: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter a floating-point number: ");
        scanf("%f", &num); 
        sum += num; 
    }

    printf("The sum of the numbers is: %.2f\n", sum);

    return 0;
}
