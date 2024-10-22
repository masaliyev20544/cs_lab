#include <stdio.h>

int main(void) {
     
    char string[1000];
    int countWord = 1;

    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        if (string[i] == '#') {
            countWord++;
        }
    }
    printf("The num. of words >> %d", countWord);
}