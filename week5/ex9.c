#include <stdio.h>

int main(void) {
    int fib[3001];
    fib[0] = 0;
    fib[1] = 1;
    int count = 2;

    while (1) {
        fib[count] = fib[count - 1] + fib[count - 2];
        if (fib[count] > 3000) {
            break;
        }
        count++;
    }

    int x, y;
    while (scanf("%d%d", &x, &y) != EOF) {
        int found = 0;

        for (int i = 0; fib[i] <= y; i++) {
            if (fib[i] >= x) {
                printf("%d ", fib[i]);
                found = 1;
            }
        }

        if (found == 0) {
            printf("DO NOT EXIST\n");
        }
        else {
            printf("\n");
        }
    }

}