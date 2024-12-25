#include "stdio.h"

int main(void) {
    
    int n, m;
    scanf("%d%d", &n, &m);
    
    int arr[n][m];
    
    if (n < 1 && m < 1) {
        puts("The dims aren't vld.");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int arrT[m][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arrT[j][i] = arr[i][j];
        }
    }

    puts("");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arrT[i][j]);
        }
        puts("");
    }
}