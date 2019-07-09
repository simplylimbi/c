//
//  main.c
//  final problem 4
//
//  Created by Limbi Garcia on 4/26/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

/*
 
 4.    Create a structure called book with the following fields.
 a.    Book Title (no white space)
 Author Lastname
 year published
 b.    Create a book structure pointer called b1.
 
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct{
    
    char title[30];
    char authorLname[30];
    int year;
    
}book;

void fillBook(book *b1);

int main()
{
    int *b1 = 0;
    
    fillBook(b1);
    
    b1 = (int *)malloc(sizeof(int));
    if (b1 == 0)
    {
        printf("ERROR: Out of memory\n");
        return 1;
    }
    *b1 = 5;
    printf("%d\n", *b1);
    free(b1);
    return 0;
}

void fillBook(book *b1){
    
    printf("\nWhat is the book title?: ");
    scanf("%s", b1->title);
    printf("\nWhat is the author's last name?: ");
    scanf("%s", b1->authorLname);
    printf("\nWhat year was the book published?: ");
    scanf("%d", &b1->year);
    
    
}
