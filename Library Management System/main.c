#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

int main()
{
    int choice = 0;

    do
    {
        choice = menu();
        switch (choice)
        {
        case 1: add();
            break;
        case 2: view();
            break;
        case 3: edit();
            break;
        case 4: checkout();
            break;
        case 5: write();
            break;
        case 6: read();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("invalid");
            break;
        }
    } while (choice != 0);

    return 0;
}














