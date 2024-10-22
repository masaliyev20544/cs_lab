#include <stdio.h>

int main(void)
{
    int x1, v1, x2, v2;
    int time = 0;

    scanf("%d %d", &x1, &v1);
    scanf("%d %d", &x2, &v2);

    if ((x1 < x2 && v1 <= v2) || (x1 > x2 && v1 >= v2))
    {
        printf("NEVER\n");
        return 0;
    }


    for (int currPos1 = x1, currPos2 = x2;; currPos1 += v1, currPos2 += v2, time++)
    {
       
        if (currPos1 == currPos2)
        {
            printf("They will meet at time %d at position %d.\n", time, currPos1);
            return 0;
        }
       
        if ((currPos1 > currPos2 && x1 < x2) || (currPos1 < currPos2 && x1 > x2))
        {
            printf("They will pass each other at time %d, the positions will be %d for player 1 and %d for player 2\n", time, currPos1, currPos2);
            return 0;
        }
    }

}