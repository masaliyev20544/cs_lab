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

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a >= b) 
    {    
        int c = a;
        a = b;

        for (; a <= c; a++)
        {
            if (a % 6 == 0) 
            sum += a;
        }
    } else {
        for(; a <= b; a++) 
        {
            if (a % 6 == 0) 
            sum += a;
        }
    }
    printf("The sum equals to %d", sum);
}