#include <stdio.h>

int main(void) {
	int a, b, c;

	while (scanf("%d%d%d", &a, &b, &c) != -1) {
		for (; a <= b; a++)
			if (a % c == 0)
				printf("%d ", a);
		printf("\n");
	}
}