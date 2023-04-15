#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include"Booksinfo.h"
#include"Database.h"
#include"Linkedlist.h"




void read()

{
	FILE* data1 = NULL;
	char str[50];
	data1 = fopen(path, "r");
	if (data1 == NULL)
	{
		printf("error");
	}
	while (!feof(data1))
	{
		fgets(str, 5, data1);
		printf("%s", str);
	}
	fclose(data1);
}