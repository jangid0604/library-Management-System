#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

void view()
{
    int ch;

    if (count == 0)
        printf("There is no book record");
    else
        printf("The list of books are:");
    for (i = 0; i < count; i++)
    {
        printf("\nId : %d\n", bk[i].Id);
        printf("\nName: %s\n", bk[i].name);
        printf("\nAuthor: %s\n", bk[i].author);
        printf("\nPage : %d\n", bk[i].pages);
        printf("\nNo of copies : %d\n", bk[i].no_of_copies);
        printf("\nISBN no : %d\n", bk[i].ISBN);
    }
}