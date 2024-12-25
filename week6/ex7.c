#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], newstr[1002];
	int cnt = 0;
	fgets(str, sizeof(str), stdin);
	int length = strlen(str);

	if (str[length - 1] == '\n') {
		str[length - 1] = '\0';
		length--;
	}

	for (int i = length - 1; i >= 0; i--) {
		newstr[cnt++] = str[i];
	}
	newstr[cnt] = '\0'; 
	printf("%s\n", newstr);

	return 0;
}