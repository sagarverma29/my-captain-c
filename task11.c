#include<stdio.h>
struct bookdetail
{
	char name[20];
	char genre[20];
	char author[20];
};
void display(struct bookdetail book);
int main()
{
	struct bookdetail book;
	printf("enter the title of the book:");
	gets(book.name);
	printf("enter the author of the book:");
	gets(book.author);
	printf("enter the genre of the book:");
	gets(book.genre);
	display(book);
}
void display(struct bookdetail book)
{
	printf("****************************************************************\n");
	printf("INFO REGARDING THE BOOK IS");
	printf("\n1. BOOK TITLE: %s", book.name);
	printf("\n2. BOOK AUTHOR: %s", book.author);
	printf("\n3. BOOK GENRE: %s", book.genre);
}
