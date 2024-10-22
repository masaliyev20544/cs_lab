#include <stdio.h>

int main(void) {
    int n, i;
    float sum = 0, avg;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    avg = sum / n;

    for (i = 0; i < n; i++) {
        if (arr[i] < avg) {
            printf("%d ", arr[i]);
        }
    }
}
