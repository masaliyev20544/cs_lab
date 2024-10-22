#include <stdio.h>

int main(void) {
    
    char input[1000];
    int counter = 0;

    fgets(input, sizeof(input), stdin);

    while (input[counter] != '\0' && input[counter] != '\n') {
        counter++;
    }

    printf("The length >> %d\n", counter);
}
