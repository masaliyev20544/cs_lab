#include <stdio.h>

int find_max(int arr[], int length) {
	if (length == 0) return 0;

	int max = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] > max) max = arr[i];
	
	return max;
}

int main() {
	int length;
	scanf("%d", &length);
	
	int arr[length];
	for (int i = 0; i < length; i++)
		scanf("%d", &arr[i]);

	printf("%d\n", find_max(arr, length));
}