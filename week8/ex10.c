#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
	if (b == 0) return abs(a);

	return gcd(b, a % b);
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}