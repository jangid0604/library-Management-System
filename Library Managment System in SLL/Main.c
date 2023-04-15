#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"



int main()
{
	int choice;
	while (1)
	{
		printf("\n*****Menu*****\n");
		printf("\n1.ADD Book.\n");
		printf("\n2.View All Books.\n");
		printf("\n3.Delete Book.\n");
		printf("\n4.Search Book.\n");
		printf("\n5.View All Books from File.\n");
		printf("\n0.EXIT\n");
		printf("\nEnter the choice:\n");
		scanf("%d", &choice);
		

		switch (choice)
		{

		case 0:
			exit(0);
		case 1:
			add_book();
			break;
		case 2:
			view_book();
			break;
		case 3:
			delete_book();
			break;
		case 4:
			search();
			break;
		case 5:
			read();
			break;
		default:
			printf("\nInvaild choice ..plz enter correct choice..");
			break;
		}
	}
}







