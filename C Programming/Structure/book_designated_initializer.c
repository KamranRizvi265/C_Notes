#include<stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

typedef struct Book Book;

int main()
{
    Book books[3] = {
        {.title = "The Great Gatsby",
         .author = "F. Scott Fitzgerald",
         .pages = 180
        },
        {
         .title = "1984",
         .author = "George Orwell",
         .pages = 328
        },
        {
         .title = "To Kill a Mockingbird",
         .author = "Harper Lee",
         .pages = 281
        }
    };

    printf("\nBooks in the library:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Pages: %d\n\n", books[i].pages);
    }
    
    return 0;
}