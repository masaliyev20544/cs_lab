#include <stdio.h>

void reverseArr(int *arr, int size) {
    int *first = arr;           
    int *last = arr + size - 1; 
    int holder;

    while (first < last) {
        holder = *first;
        *first = *last;
        *last = holder;

        first++;
        last--;
    }
}

void printArr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArr(arr, size);

    printf("Reversed >> ");
    printArr(arr, size);

    return 0;
}
