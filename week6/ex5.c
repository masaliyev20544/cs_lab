#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
	char str[1002];
	int length = 0;
	int isPalindrome = 1;

	fgets(str, sizeof(str), stdin);
	length = strlen(str);
	if (str[length - 1] == '\n') {
		str[length - 1] = '\0';
		length--;
	}
	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - 1 - i]) {
			isPalindrome = 0;
			break;
		}
	}

	if (isPalindrome)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}