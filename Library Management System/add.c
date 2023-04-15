#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"


void add()
{
    printf("Enter the id no:");
    scanf("%d", &bk[i].Id);
    printf("Enter the book name:");
    scanf("%s", bk[i].name);
    printf("Enter the Author:");
    scanf("%s", bk[i].author);
    printf("Enter the page:");
    scanf("%d", &bk[i].pages);
    printf("Enter the no of copies:");
    scanf("%d", &bk[i].no_of_copies);
    printf("Enter the ISBN NO:");
    scanf("%d", &bk[i].ISBN);
    count = count + 1;
    i = i + 1;
}