#include <stdio.h>

int main(void) {
	int num;
	int sum_even = 0, sum_odd = 0;
	for (; scanf("%d", &num) != EOF;) {
		if (num % 2 == 0) {
			sum_even += num;
		}
		else {
			sum_odd += num;
		}
	}

	printf("%d\n", sum_even);
	printf("%d\n", sum_odd);
}