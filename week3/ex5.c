#include <stdio.h>

int main(){
	int n, digit, sum = 0;
	scanf("%d", &n);

	if (n < 0) {
		n = -n;
	}

	while (n > 0) {
		digit = n % 10;
		if (digit % 2 == 0) {
			sum += digit;
		}
		n = n / 10;
	}

	printf("%d\n", sum);
}