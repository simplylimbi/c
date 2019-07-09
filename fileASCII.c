//
//  main.c
//  hw 2
//
//  Created by Limbi Garcia on 2/18/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    
    int num;
    int asciiVal1;
    int asciiVal2;
    int userInt;
    int sum;
    double userDbl;
    double mult;
    char let;
    
    // 1. greet the user.
    printf("Hello! && welcome to this program!\n");
    
    // 2. get a letter from an input.txt and print it to the screen.
    
    FILE *inp;
    FILE *outp;
    
    inp = fopen("input.txt", "r");
    outp = fopen("result.txt", "w");
    
    // read letter from input.txt
    fscanf(inp, " %c", &let);
    
    // read number from input.txt
    // fscanf(inp, "%lf", &spd);
    
    // output to screen
    printf("the letter is: %c \n", let);
    
    // 3. change to lowercase
    printf("the letter lowercase is: %c \n", tolower(let));
    
    // 4. numerical ascii value
    asciiVal1 = tolower(let);
    printf("the ASCII value of the character is: %d", asciiVal1);
    
    // 5. change the letter to uppercase
    printf("that letter uppercase is: %c \n", toupper(let));
    
    // 6. find the ascii value
    asciiVal2 = toupper(let);
    printf("the ASCII value is: %d", asciiVal2);
    
    // 7. which letter is larger numerically
    if (asciiVal1 > asciiVal2)
        printf("the lower case letter is larger. \n");
    else
        printf("the upper case letter is larger. \n");
    
    // 8. get an integer from input.txt and print it to the screen
    fscanf(inp, "%d", &num);
    printf("the number is: %d \n", num);
    
    // 9. ask and get an integer from user
    printf("please enter and integer: ");
    scanf("%d", &userInt);
    printf("\n");
    
    // 10. save the integer to result.txt
    fprintf(outp, "%d \n", userInt);
    
    // 11. calc the sum of the int from the file and the int from the user
    sum = num + userInt;
    
    // 12. print the result onto the screen
    printf("the sum of the two numbers is: %d \n", sum);
    
    // 13. save the sum to result.txt
    fprintf(outp, "%d \n", sum);
    
    // 14. get a double from the user
    printf("please enter a double: ");
    scanf("%lf", &userDbl);
    printf("\n");
    
    // 15. multiply the double by the sum
    mult = userDbl * sum;
    
    //16. print the result to the screen
    printf("the double multiplied by the sum is: %lf \n", mult);
    
    //17. save to result.txt
    fprintf(outp, "%lf", mult);
    
    fclose(inp);
    fclose(outp);
    
    return 0;
}
