#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

void write()
{
    FILE* trf;
    trf = fopen("E:\\Mahesh Projects\\PROJECT SOLUTION\\Library Management System\\BooksData.txt", "w");
    for (i = 0; i < count; i++)
    {
        fprintf(trf, "Id : %d\n", bk[i].Id);
        fprintf(trf, "Book_name:. %s\n", bk[i].name);
        fprintf(trf, "Author : %s\n", bk[i].author);
        fprintf(trf, "Pages : %d\n", bk[i].pages);
        fprintf(trf, "No_of_copies: %d\n", bk[i].no_of_copies);
        fprintf(trf, "ISBN : %d\n", bk[i].ISBN);
    }
    fclose(trf);
}