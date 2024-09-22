#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    int t1, t2, t3, t4;
        printf("Enter the duration of the 1st task >> ");
            scanf("%d", &t1);
        printf("Enter the duration of the 2nd task >> ");
            scanf("%d", &t2);
        printf("Enter the duration of the 3rd task >> ");
            scanf("%d", &t3);
        printf("Enter the duration of the 4th task >> ");
            scanf("%d", &t4);

if (t1 > t2 || t1 > t3 || t1 > t4)
    printf("The time required to complete all the jobs is %d.", t1);
else if (t2 > t1 || t2 > t3 || t2 > t4)
    printf("The time required to complete all the jobs is %d.", t2);
else if (t3 > t1 || t3 > t2 || t3 > t4)
    printf("The time required to complete all the jobs is %d.", t3);
else if (t4 > t1 || t4 > t2 || t4 > t3)
    printf("The time required to complete all the jobs is %d.", t4);
else 
    printf("The time required to complete all the jobs is %d.", t2);
}