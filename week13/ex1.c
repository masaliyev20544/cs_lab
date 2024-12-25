#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) 
{
    printf("\nTitle: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
}

int main() 
{
    int n;

    printf("\nEnter the number of books >> ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book #%d >> \n", i + 1);

        printf("Enter the title >> ");
        scanf(" %[^\n]", books[i].title);

        printf("Enter the author's name >> ");
        scanf(" %[^\n]", books[i].author);

        printf("Enter the price >> ");
        scanf("%f", &books[i].price);
    }

    puts("-----------------------------------------------");
    printf("\nAll the data refering to the entered books (see below) \n");
    puts("-----------------------------------------------");
    for (int i = 0; i < n; i++) {
        printBook(books[i]);
    }

    printf("\nThe size of the 'Book' structure >> %d (bytes). The reason for it is that the memory allocated for a title is about 50 bytes, about 50 bytes for an author's name, and about 4 bytes for a price.\n\n", sizeof(struct Book));

    return EXIT_SUCCESS;
}