//
//  quiz1.c
//  quiz 1
//
//  Created by Limbi Garcia on 2/1/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>

// ask the user for 3 num inputs as int
// display the average as a double

double CalcAvg(int num1, int num2, int num3);

int main()
{
    int first, second, third;
    double avg;
    printf("pick your first number: ");
    scanf("%d", &first);
    printf("\n");
    printf("second number: ");
    scanf("%d", &second);
    printf("\n");
    printf("third number: ");
    scanf("%d",&third);
    avg = CalcAvg(first, second, third);
    printf("the average of %d,%d, and %d is %0.2f", first, second, third, avg);
    return 0;
}

// function to calculate the average
double CalcAvg(int num1, int num2, int num3)
{
    double average;
    average = (num1 + num2 + num3) / 3;
    return average;
}
