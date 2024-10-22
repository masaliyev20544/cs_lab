#include <stdio.h>

int main(void) {
	int n;
	double x, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", &x);
		sum += x;
	}

	printf("%lf\n", sum);
}