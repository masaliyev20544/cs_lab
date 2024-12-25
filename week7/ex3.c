#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i][i];
		sum += arr[i][n - 1 - i];
	}
	if (n % 2 != 0)
		sum -= arr[n / 2][n / 2];
	printf("%d", sum);
}