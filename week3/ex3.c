#include <stdio.h>

int main() {
	int n, i = 1; 
	double sum = 0.0; 
	scanf("%d", &n);

	while (i <= n) {
		sum += 1.0 / i;
		i++;
	}

	printf("%.3f\n", sum);

	return 0;
}