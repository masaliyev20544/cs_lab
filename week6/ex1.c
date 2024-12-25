#include <stdio.h>

int main() {
	
	char str[1002];
	int length = 0;
	int i = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			length++;
		}
		i++;
	}

	if (str[i - 1] == '\n') {
		length--;
	}

	printf("%d\n", length);

	return 0;
}