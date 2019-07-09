//
//  main.c
//  quiz 3
//
//  Created by Limbi Garcia on 15/03/2019.
//  Copyright © 2019 limbi garcia. All rights reserved.
//


/*
 
 You will be creating an output file for this quiz as well, name it "output.txt"
 
 You will create a program that will read (fscanf) 5 inputs from "input2.txt", num1 num2 num3 num4 num5. (double)
 
 You will use a loop to scan these values into an array of size 5 (ex. double num[5];)
 
 Once you have these saved you will use a conditional statement to test to see if the array values are greater than 35.
 
 You will write those values that are greater than 35 to "output.txt"
 
 
 
 3 values will be saved to the output file.
 
 */


#include <stdio.h>
#include <ctype.h>

#define size 5

int main() {
  
    // variables
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    
    double num[size];
    
   
    
    FILE *inp;
    FILE *outp;
    

    inp = fopen("input2.txt", "r");
    outp = fopen("output.txt", "w");
    
    
    fscanf(inp, "%lf", &num1);
    fscanf(inp, "%lf", &num2);
    fscanf(inp, "%lf", &num3);
    fscanf(inp, "%lf", &num4);
    fscanf(inp, "%lf", &num5);
    
    num[0] = num1;
    
    printf("%lf", num1);
    
    
    return 0;
}
