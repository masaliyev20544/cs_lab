#include <stdio.h>

int main(void) {
	int n, element, pos = -1;
	scanf("%d", &n);

	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &element);

	for (int i = 0; i < n; i++) {
		if (arr[i] >= element) {
			pos = i;
			break;
		}
	}

	if (pos == -1) {
		pos = n;
	}

	printf("%d\n", pos);

	for (int i = n; i > pos; i--) {
		arr[i] = arr[i - 1];
	}

	arr[pos] = element;
	for (int i = 0; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

}