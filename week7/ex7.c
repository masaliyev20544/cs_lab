#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char names[n][51];
	for (int i = 0; i < n; i++) {
		scanf("%s", names[i]);
	}

	char target[51];
	scanf("%s", target);

	int j;
	for (int i = 0; i < n; i++) {
		for (j = 0; j < 51; j++) {
			if (names[i][j] != target[j]) {
				break;
			}
			if (names[i][j] == '\0') {
				break;
			}
		}

		if (target[j] == '\0' && names[i][j] == '\0') {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("-1");

	return 0;
}