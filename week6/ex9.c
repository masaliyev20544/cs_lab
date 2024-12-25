#include<stdio.h>
#include<string.h>

int main() {
	char text[1002];
	char target[1002];
	fgets(text, sizeof(text), stdin);
	fgets(target, sizeof(target), stdin);
	int text_len = strlen(text);
	int target_len = strlen(target);
	
	if (text[text_len - 1] == '\n') {
		text[text_len - 1] = '\0';
		text_len--;
	} 

	if (target[target_len - 1] == '\n') {
		target[target_len - 1] = '\0';
		target_len--;
	}

	int j = 0; 
	for (int i = 0; i < text_len; i++) {
		if (text[i] == target[j]) {
			j++;  
			if (j == target_len) {
				printf("%d\n", i - target_len + 1);
				return 0;
			}
		} 
		
		else {
			i -= j;
			j = 0;
		}
	}
	
	printf("Search value is not found in the text.\n");
	return 0;
}