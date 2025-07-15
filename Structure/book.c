#include<stdio.h>
#include<string.h>

struct Book
{
    char title[50];
    char author[50];
    int pages;
};

typedef struct Book Book;

void input_books(Book *books, int i);
void print_books(Book *books);

int main()
{
    Book books[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        input_books(&books[i], i);
    }
    
    for(int i = 0; i < 3; i++)
    {
        print_books(&books[i]);
    }

    return 0;
}

void input_books(Book *books, int i)
{
    printf("Enter title of book %d: ", i + 1);
    scanf(" %[^\n]", &(books->title));
    printf("Enter author of book %d: ", i + 1);
    scanf(" %[^\n]", &(books->author));
    printf("Enter number of pages in book %d: ", i + 1);
    scanf("%d", &(books->pages));
}

void print_books(Book *books)
{
    printf("Title: %s\n", books->title);
    printf("Author: %s\n", books->author);
    printf("Pages: %d\n", books->pages);
}