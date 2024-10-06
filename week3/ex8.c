#include <stdio.h>

int main() {
	int n;
	long long f1, f2, f3;
	scanf("%d", &n);

	f1 = f2 = f3 = 1;

	if (n == 1)
		printf("1\n");
	else {
		int i = 2;
		while (i < n) {
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
			i++;
		}
		printf("%lld\n", f3);
	}
}