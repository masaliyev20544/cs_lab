#include <stdio.h>

int main() {
	char str[1002];
	int res = 1;
	fgets(str, 1001, stdin);

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == '#') res++;
	
	printf("%d\n", res);
}