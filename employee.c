//
//  main.c
//  final problem 1
//
//  Created by Limbi Garcia on 4/26/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    
    // a. Fill with:
    //fname (char array) no whitespace
    //title (char array) no whitespace
    //id (int)
    //salary (float)
    
    char fname[30];
    char title[30];
    int id;
    float salary;
    
}employee;

float salAvg(employee emp, int n);
void fillPtr(employee *empPtr);

int main()
{
    // b.
    // Initialize number of employees (use a small number, at least 2)
    int n;
  
    //Ask user for number of employees, scan to n
    printf("How many employees are there? ");
    scanf("%d", &n);
    
    //Create structure array
    //employee emp[# of employees here]);
    employee emp[n];
    
    // c. Create a user defined function to ask user to fill in information using a pointer.
    // Call function for each employee.
    // fillPtr(&emp[0])

    for(int i = 0; i < n; i++)
    {
        fillPtr(&emp[i]);
    }
    
    
    
   salAvg(emp[n], n);
    
  
    return 0;
}

float salAvg(employee emp, int n)
{
    // d.    Create a user defined function that calculates the average salary across all the employees and print to screen. The function has 2 inputs, the structure array and the number of employees.
    
    
    //Sum salary values, divide by # of employees
    char list[30];
    int sum;
    int avg;
    
    for (int i = 0; i < n; i++) {
        list[n] = emp.salary;
        list[n] += list[n+1];
        n++;
    }
    
    sum = list[n];
    avg = sum / n;
    
    printf("\nThe average is: %d", avg);
    
    return 0;
}

void fillPtr(employee *empPtr)
{
    //Ask user for input to employee structure fields
    //fname
    //title
    //id
    //salary
    
    printf("\nPlease enter the employee's first name: ");
    scanf("%s", empPtr->fname);
    
    printf("\nEnter employee's title: ");
    scanf("%s", empPtr->title);
    
    printf("\nEnter employee's id: ");
    scanf("%d", &empPtr->id);
    
    printf("\nEnter employee's salary: ");
    scanf("%f", &empPtr->salary);
}
