#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	printf("%d ", n);
	cnt++;

	while (n > 1) {
		if (n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1; 
		}
		printf("%d ", n);
		cnt++;
	}

	printf("\n%d\n", cnt);

	return 0;
}