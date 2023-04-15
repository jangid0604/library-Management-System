#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"

void add_book()
{
	FILE* data;
	book* bk;
	book* ptr = NULL;
	data = fopen("records.txt", "a");
	bk = (book*)malloc(sizeof(book));

	printf("\nEnter the Id no: \n");
	scanf("%d", &bk->id);
	printf("\nEnter the Book Name: \n");
	scanf("%s", bk->name);
	printf("\nEnter the Author Name: \n");
	scanf("%s", bk->author);
	printf("\nEnter the page no: \n");
	scanf("%d", &bk->pages);
	printf("\nEnter the no of copies: \n");
	scanf("%d", &bk->no_of_copies);
	printf("\nEnter the ISBN no: \n");
	scanf("%d", &bk->ISBN);
	bk->next = NULL;
	if (head == NULL)
	{
		head = bk;
	}
	else
	{
		ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = bk;
	}
	fprintf(data, "\nId no: %d\n", bk->id);
	fprintf(data, "\nBook Name: %s\n", bk->name);
	fprintf(data, "\nAuthor's Name: %s\n", bk->author);
	fprintf(data, "\nPages :%d\n", bk->pages);
	fprintf(data, "\nNo of copies :%d \n", bk->no_of_copies);
	fprintf(data, "\nISBN No: %d\n", bk->ISBN);
	fclose(data);
}