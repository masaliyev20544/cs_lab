#include <stdio.h>

int main() {
	int n, m, row_sum = 0, column_sum = 0;
	scanf("%d%d", &n, &m);
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
			row_sum += arr[i][j];
		}
		printf("| %d\n", row_sum);
		row_sum = 0;
	}
	for (int i = 0; i < m; i++) {
		printf("_ ");
	}
	printf("\n");
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			column_sum += arr[i][j];
		}
		printf("%d ", column_sum);
		column_sum = 0;
	}
}