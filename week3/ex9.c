#include <stdio.h>
#include <math.h>

int main(void) {

    float sum = 0;
    float sinX;
    
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    int n;
    printf("Enter the number of temrs to be accumulated: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("Please, enter the POSITIVE integer value for the number of temrs to be accumulated: ");
        scanf("%d", &n);
    }
    
    for(int i = 0; i <= n; i++) {
        int n1 = 0 - 1;
        int n2 = 2 * i + 1;
        float signFactor = (float)pow(n1, i);
        float numerator = (float)pow(x, n2);
        
        int k = 1;
        float denominator = 1;
        for (; k <= n2;) {
            denominator *= k++;
        }

        sinX = signFactor * numerator / denominator;
        sum += sinX;
    }
    double y = sin(x);
    printf("This is the approximate value of sin(x) according to the Taylor S.: %f", sum);
    printf("\nThis is the exact value of sin(x) according to math.h: %.10lf", y);
}