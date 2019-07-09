//
//  coffee.c
//  hw 1, part 2
//
//  Created by Limbi Garcia on 1/22/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    
    // variables
    char first;
    char second;
    char last;
    int coffee;
    double order;
    
    // inputs
    printf("what is your first initial?: ");
    scanf(" %c", &first);
    printf("\n");
    
    printf("second initial?: ");
    scanf(" %c", &second);
    printf("\n");
    
    printf("last initial?: ");
    scanf(" %c", &last);
    printf("\n");
    
    printf("how many orders of coffe would you like?: ");
    scanf("%d", &coffee);
    
    // calculations
    order = coffee * 2.99
    
    // output
    printf("%c%c%c, you owe $%f", first, second, last, order);
    
    
    return 0;
}
