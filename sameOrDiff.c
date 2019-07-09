//
//  main.c
//  hw3
//
//  Created by Limbi Garcia on 4/25/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // - Create 4 character arrays. (word, word1, word2, word 3).
    char word[25];
    char word1[25];
    char word2[25];
    char word3[25];
    int len;
    
    //  - Ask user for an all lowercase word and save it to word.
    printf("please enter a word in all lowercase letters: ");
    scanf("%s", word);
    
    len = strlen(word);
    
    // - Using a loop, convert the word to all capital letters and save to word1 (remember to keep track of null character ‘\0’, you might need to manually add it to the end, depending on your method.
    for (int i = 0; i < len; i++)
    {
        word1[i]=toupper(word[i]);
    }

    printf("\nthat word capitalized is: %s \n", word1);
    
    // - Using strncpy, copy the first 3 letters of word1 to word2. Remember ‘\0’
    strncpy(word2, word1, 3);
    word2[3] = '\0';
    
    // - Finally, using another loop, convert word2 to all lower case letters and save into word3.
    for (int i = 0; i < len; i++)
    {
        word2[i]=tolower(word2[i]);
    }
    
    strcpy(word3, word2);
    printf("\nthe first 3 letters of that word all lower case is: %s \n", word3);
    
    // - Using strncmp, compare the first 3 letters of word3 and word.
    // - Using an if statement (as shown in class and notes)
    // - Printf, “same” if same.
    // - And “different” if different.
                
    if (strncmp(word3,word, 3) == 0)
    {
        printf("\nsame \n");
    }
    else
    {
        printf("\ndifferent \n");
    }

    
    return 0;
}
