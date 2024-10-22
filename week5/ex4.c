#include <stdio.h>

int main(void) {
	int n, idx, el;
	scanf("%d", &n);

	int nums[n + 1];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
	scanf("%d%d", &idx, &el);

	if (idx < 0 || idx > n) {
		printf("Invalid input\n");
	
	}
}