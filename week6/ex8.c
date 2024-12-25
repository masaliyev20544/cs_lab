#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], res[1002];
	int i, n, tok_end, len = 0;
	fgets(str, 1001, stdin);
	res[0] = '\0';

	n = strlen(str);
	if (str[n - 1] == '\n') str[n - 1] = '\0', n--;

	for (i = n - 1, tok_end = n; i > 0; i--) {
		if (str[i - 1] == ' ') {
			strncat(res, str + i, tok_end - i);
			len += tok_end - i;

			res[len] = ' ', res[len + 1] = '\0';
			tok_end = i - 1;
			len++;
		}
	}

	strncat(res, str, tok_end);

	printf("%s\n", res);
}