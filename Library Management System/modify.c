#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

void edit()
{
    printf("\nEnter the id no you want to Edit :");
    scanf("%d", &key);
    for (i = 0; i < count; i++)
    {
        if (key == bk[i].Id)
        {
            printf("\n\n%d %s %s %d %d %d", bk[i].Id, bk[i].name, bk[i].author, bk[i].pages, bk[i].no_of_copies, bk[i].ISBN);
            printf("\nPosition is:%d", i);
            add();
            printf("\nThe Edit data is: ");
            printf("%d %s %s %d %d %d", bk[i].Id, bk[i].name, bk[i].author, bk[i].pages, bk[i].no_of_copies, bk[i].ISBN);
        }
        else
        {
            printf("\nNo record is found");
        }
    }
}