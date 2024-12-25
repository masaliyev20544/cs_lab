#include <stdio.h>

int main() {
	char str1[1002], str2[1002];
	fgets(str1, 1001, stdin);

	int i, j;
	for (i = 0, j = 0; str1[i] != '\0'; i++)
		if (str1[i] != ' ' || (i > 0 && str1[i - 1] != ' '))
			str2[j++] = str1[i];
	
	str2[j] = '\0';
	printf("%s", str2);
}