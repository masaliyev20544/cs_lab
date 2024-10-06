#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int main(void) 
{
    int sum = 0;

    int a, b, k;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &k);

    if (a >= b) 
    {    
        int c = a;
        a = b;

        for (; a <= c; a++)
        {
            if (a % k == 0) 
            sum += a;
        }
    } else {
        for(; a <= b; a++) 
        {
            if (a % k == 0) 
            sum += a;
        }
    }
    printf("The sum equals to %d", sum);
}