#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char str[2 * n + 1];

	for (int i = 0; i < n; i++)
		str[2 * i] = ((i + 1) % 2 == 0 ? 'A' + i : '1' + i), str[2 * i + 1] = ' ';

	str[2 * n] = '\0';

	for (int i = 0; i < n; i++) printf("%s\n", str);
}