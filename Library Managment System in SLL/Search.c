#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"

void search()
{
	int key;
	book* ptr = NULL;
	ptr = head;
	printf("Enter the id no :");
	scanf("%d", &key);
	while (ptr != NULL)
	{
		if (ptr->id == key);
		{
			printf("\nID :%d\n", ptr->id);
			printf("\nNAME :%s\n", ptr->name);
			printf("\nAUTHOR :%s\n", ptr->author);
			printf("\nNO_OF_COPIES :%d\n", ptr->no_of_copies);
			printf("\nPAGES :%d\n", ptr->pages);
			printf("\nISBN :%d\n", ptr->ISBN);
			return;
		}
		ptr = ptr->next;
	}
	printf("no records are found");

}