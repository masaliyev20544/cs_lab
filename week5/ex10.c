#include <stdio.h>

int main(void) {
	int n, t;

	scanf("%d%d", &n, &t);
	int nums[n];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] + nums[j] == t) {
				printf("%d %d\n", i, j);

				return 0;
			}
		}
	}
}