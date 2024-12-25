#include "stdio.h"

int main(void) {
    
    int n;
    scanf("%d", &n);
    
    int arr[n][n];
    
    if (n < 1) {
        puts("The dims aren't vld.");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum is >> %d", sum);
}