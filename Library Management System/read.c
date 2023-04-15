#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"booksinfo.h"
#include"database.h"
#include"Array.h"

void read()
{
    {
        char str[100];
        FILE* fptr; 
        fptr = fopen("E:\\Mahesh Projects\\PROJECT SOLUTION\\Library Management System\\BooksData.txt", "r");
        while (fgets(str, 100, fptr))
        {
            printf("%s", str);
        }
        fclose(fptr);
        return 0;
}