//
//  grades.c
//  grades
//
//  Created by Limbi Garcia on 1/18/19.
//  Copyright © 2019 fiorella. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // variables
    double quiz;
    double hw;
    double midterm;
    double finalgrade;
    double sum;
    double average;
    
    // banner
    printf("this is a program to calculate your average grade.\n");
    
    // quiz
    printf("what is your quiz grade?\n");
    scanf("%lf", &quiz);
    
    // quiz
    printf("what is your hw grade?\n");
    scanf("%lf", &hw);
    
    // quiz
    printf("what is your midterm grade?\n");
    scanf("%lf", &midterm);
    
    // quiz
    printf("what did you get on your final?\n");
    scanf("%lf", &finalgrade);
    
    // calculcations
    sum = quiz + hw + midterm + finalgrade;
    average = sum / 4;
    
    // avg
    printf("your average grade is %f.\n", average);
    
    
    return 0;
}
