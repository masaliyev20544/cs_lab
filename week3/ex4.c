#include <stdio.h>

int main() {
	int n;
	double x, sum = 0;

	scanf("%d", &n);

	int i = 0;
	while (i < n) {
		scanf("%lf", &x);
		sum += x;
		i++;
	}

	printf("%lf\n", sum);
}