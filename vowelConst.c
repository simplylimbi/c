//
//  main.c
//  final problem 2
//
//  Created by Limbi Garcia on 4/26/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

/*
 
 2.    Ask user for a char array (string). Set up 2 variables that contain the number of vowels and consonants. Use an if statement, and conditional statements to test each letter of the word and increment the respective variables. countV and countC.
 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char word[30];
    int countV = 0;
    int countC = 0;
    
    printf("Please enter a word: ");
    scanf("%s", word);
    
    for (int i = 0; i < strlen(word); i++) {
        
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            countV++;
        }
        else{
            countC++;
        }
        }
   
    printf("\nThe number of vowels is: %d", countV);
    printf("\nThe number of consonants is: %d", countC);
    
    return 0;
}
