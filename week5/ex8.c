#include <stdio.h>

int main(void) {
	int n, min, max, sum = 0;
	scanf("%d", &n);
	int nums[n];

	scanf("%d", &nums[0]);
	min = max = nums[0];

	for (int i = 1; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] < min) min = nums[i];
		if (nums[i] > max) max = nums[i];
	}

	for (int i = 0; i < n; i++)
		if (nums[i] != max && nums[i] != min)
			sum += nums[i];
	
	printf("%d\n", sum);
}