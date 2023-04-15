#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"



void delete_book()
{
	book* ptr = head;
	book* nextbook;
	FILE* del;

	int pos, i = 0;
	ptr = head;
	printf("Enter the pos :");
	scanf("%d", &pos);
	while (i < pos - 1)
	{
		ptr = ptr->next;
		i++;
	}
	nextbook = ptr->next;
	ptr->next = nextbook->next;
	free(nextbook);
}