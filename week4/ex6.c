#include <stdio.h>

int main(void) {
	int n, x, max, min, max_p = 1, min_p = 1;

	scanf("%d%d", &n, &x);

	max = min = x;
	for (int i = 2; i <= n; i++) {
		scanf("%d", &x);

		if (x > max) max = x, max_p = i;
		if (x < min) min = x, min_p = i;
	}

	printf("Shortest: %d %d\n", min, min_p);
	printf("Tallest: %d %d\n", max, max_p);
}