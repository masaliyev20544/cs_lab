#include <stdio.h>

int main() {
	long long n, d, factor = 1, res = 0;
	scanf("%lld", &n);

	while (n != 0) {
		d = n % 10;
		if (d != 0) {
			res += factor * d;
			factor *= 10;
		}
		n /= 10;
	}

	printf("%lld\n", res);
}