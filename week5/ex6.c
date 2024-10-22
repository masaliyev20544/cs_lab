#include <stdio.h>

int main(void) {
	int n, x, cur, cnt, temp, nums_count;
	scanf("%d", &n);
	int nums[n];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	cur = nums[0], cnt = 1;
	for (int i = 1; i < n; i++) {
		if (cur != nums[i]) {
			printf("%d %d\n", cur, cnt);
			cur = nums[i];
			cnt = 1;
		} else cnt++;
	}

	printf("%d %d\n", cur, cnt);
}