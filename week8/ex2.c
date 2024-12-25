#include <stdio.h>

long long factorial(int n) {
	long long res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", factorial(n));
}