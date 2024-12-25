#include <stdio.h>

int findMax(int *arr, int size) {
    int *p = arr;
    int max = *p;

    for (int i = 1; i < size; i++) {
        p++; 
        if (*p > max) {
            max = *p;
        }
    }

    return max;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);

    printf("Max. >> %d\n", max);

    return 0;
}
