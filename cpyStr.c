//
//  main.c
//  hw3.2
//
//  Created by Limbi Garcia on 4/25/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

/*
 
 2.
 Create a user defined function to copy one string to another, do not use strcpy. Ask the user for the first string (can be any word). Then using the function call, copy the first string to the second. The function prototype has been given. Utilize a while loop instead of a for loop.
 void copy_string(char d[], char s[]);
 
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>

// prototype
void copy_string(char *dPtr, char *sPtr);


int main(){
    
    char *dPtr;
    char *sPtr;
    char d[25];
    char s[25];
    dPtr = &d[25];
    sPtr = &s[25];
    
    printf("please enter a word: ");
    scanf("%s", dPtr);
    
    copy_string(dPtr, sPtr);
    sPtr[strlen(dPtr)] = '\0';
    
    printf("\nthat word is '%s.'\n", sPtr);
    
    return 0;
}

// definition
void copy_string(char *dPtr, char *sPtr)
{
    int i = 0;
    while(i < strlen(dPtr))
    {
        sPtr[i] = dPtr[i];
        i++;
    }
}

