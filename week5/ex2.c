#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    if (n > 1 && arr[0] < arr[1]) {
        printf("%d ", arr[0]);
    }
    
    for (i = 1; i < n - 1; i++) {
        if (arr[i-1] > arr[i] && arr[i+1] > arr[i])
            printf("%d", arr[i]);
    }

    if (n > 1 && arr[n-1] < arr[n-2]) {
        printf("%d", arr[n-1]);
    }
}
