#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"


void view_book()
{
	int ch;
	book* ptr = head;
	if (head == NULL)
	{
		printf("\nNo records!!");
	}
	else
	{
		printf("\n1.View Id no's: ");
		printf("\n2.View all Books Data");
		printf("\nEnter the choice: \n");
		scanf("%d", &ch);
		if (ch > 2)
		{
			printf("\nInvaild , choose correct option..");
			return;
		}
		while (ptr != NULL)
		{
			switch (ch)
			{
			case 1:
				printf("%d->", ptr->id);
				break;
			case 2:
				printf("\nID :%d\n", ptr->id);
				printf("\nNAME :%s\n", ptr->name);
				printf("\nAUTHOR :%s\n", ptr->author);
				printf("\nNO_OF_COPIES :%d\n", ptr->no_of_copies);
				printf("\nPAGES :%d\n", ptr->pages);
				printf("\nISBN :%d\n", ptr->ISBN);
				break;
			default:
				printf("\nInvaild");
				break;
			}
			ptr = ptr->next;
		}

	}
}