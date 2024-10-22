#include <stdio.h>

int main(void) {
	int n, k;
	scanf("%d%d", &n, &k);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
		if ((n - i) % k == 0) {
			printf("\n");
		}
	}

	printf("\n");

}