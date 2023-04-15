#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

int menu()
{
    int choice;
    printf("\n****MENU****\n");
    printf("\n1.Add books\n");
    printf("\n2.view all books\n");
    printf("\n3.edit the books\n");
    printf("\n4.checkout the books\n");
    printf("\n5.record in notepad\n");
    printf("\n6.read the books from notepad\n");
    printf("\n0 Exit\n");
    printf("\nEnter the choices :\n");
    scanf("%d", &choice);

    return choice;
}