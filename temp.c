//
//  temp.c
//  hw 1, part 1
//
//  Created by Limbi Garcia on 1/22/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    // variables
    double fahren = 0.0;
    double cels = 0.0;
    
    // banner
    printf("this is a program to convert fahrenheit to celsius.\n");
    printf("\n");
    
    // user input
    printf("what is the temperature in fahrenheit?\n");
    scanf("%lf", &fahren);
    
    // calculations
    cels = (fahren - 32) * 5 / 9;
    
    // output
    printf("the temperature in celsius is %fº", cels);
 
    return 0;
}
