#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

void checkout()
{
    book b2;
    FILE* sp;
    sp = fopen("E:\Mahesh Projects\PROJECT SOLUTION\Library Management System", "r");
    printf("\nEnter the id no:");
    scanf("%d", &key1);
    while (fread(&b2, sizeof(book), 1, sp))
    {
        if (key1 == bk[i].Id)
        {
            printf("\nId : %d\n", bk[i].Id);
            printf("\nName: %s\n", bk[i].name);
            printf("\nAuthor: %s\n", bk[i].author);
            printf("\nPage : %d\n", bk[i].pages);
            printf("\nNo of copies : %d\n", bk[i].no_of_copies);
            printf("\nISBN no : %d\n", bk[i].ISBN);
        }
        else
        {
            printf("No record is found");
        }
    }fclose(sp);
}