#include <stdio.h>

int main(void) {
     
    char string[1000];

    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        if (string[i] == '#') {
            string[i] = '_';
        }
    }
    printf("%s", string);
}