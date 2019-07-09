//
//  main.c
//  final problem 3
//
//  Created by Limbi Garcia on 4/26/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#include <stdio.h>

int main(){

    int rows, cols, max, maxVal = 0;
    //Create 3 2-D arrays
    int a[100][100], b[100][100], sum[100][100];
    
    //a. Ask user to input # of rows and columns (between 1-100)
    printf("How many rows are there? (between 1 - 100): ");
    scanf("%d", &rows);
    
    printf("\nHow many columns? (between 1 - 100): ");
    scanf("%d", &cols);
    
    //b1. Ask user to input values of array a using nested loops
    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            printf("\nPlease enter a value: ");
            scanf("%d", &a[i][k]);
        }
    }
    
    //b2. Ask user to input values of array b using nested loops
    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            printf("\nPlease enter a value: ");
            scanf("%d", &b[i][k]);
        }
    }
    
    //c. Ask user to add array a and b together
    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            printf("\nElement of a[%d][%d] is: %d", i, k, a[i][k]);
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            printf("\nElement of b[%d][%d] is: %d", i, k, b[i][k]);
        }
    }
    
    //d. Print results to screen.
    
    printf("\nThe sum of the two matrix is: ");
    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            sum[i][k] = a[i][k] + b[i][k];
            printf("\n%d", sum[i][k]);
        }
    }
    
    //e. Use a loop to find the max value in the array.
    // and print to screen
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            max = sum[i][k];
            if (sum[i][k] > max)
            {
                maxVal = sum[i][k];
            }
            else
            {
                maxVal = max;
            }
        }
    }
    
    printf("\nThe max value is: %d", maxVal);
    
    
    return 0;
}
