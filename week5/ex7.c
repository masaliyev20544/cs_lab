#include <stdio.h>

int main(void) {
	int n, i;
	scanf("%d", &n);
	int arr[n];
	int maxCount = 0, minCount = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == min) {
			minCount++;
		}
		if (arr[i] == max) {
			maxCount++;
		}
	}

	for (i = 0; i < minCount; i++) {
		printf("%d ", min);
	}
	for (i = 0; i < n; i++) {
		if (arr[i] != min && arr[i] != max) {
			printf("%d ", arr[i]);
		}
	}

	for (i = 0; i < maxCount; i++) {
		printf("%d ", max);
	}

	printf("\n");

}