#include <stdio.h>

int main() {
	char str[1002], newstr[1002];
	int i = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
		if (str[i] == '#') {
			newstr[i] = '_';
		} else {
			newstr[i] = str[i];
		}
		i++;
	}
	newstr[i] = '\0';
	printf("%s\n", newstr);

	return 0;
}