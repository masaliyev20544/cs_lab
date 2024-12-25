#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], search[1002], target[1002], res[1000001];
	int str_pos = 0;
	res[0] = '\0';
	
	fgets(str, 1001, stdin);
	fgets(search, 1001, stdin);
	fgets(target, 1001, stdin);

	int str_len = strlen(str), search_len = strlen(search), res_len = 0;

	if (str[str_len - 1] == '\n')
		str[str_len - 1] = '\0', str_len--;

	if (search[search_len - 1] == '\n')
		search[search_len - 1] = '\0', search_len--;

	if (target[strlen(target) - 1] == '\n')
		target[strlen(target) - 1] = '\0';

	int i = 0;

	while (str_len - i >= search_len) {
		if (strncmp(str + i, search, search_len) == 0) {
			strncat(res, str + str_pos, i - str_pos);
			strcat(res, target);
			i += search_len;
			str_pos = i;
		} else i++;
	}

	strcat(res, str + str_pos);

	printf("%s\n", res);
}