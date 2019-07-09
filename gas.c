//
//  main.c
//  exam1 prob2
//
//  Created by Limbi Garcia on 3/22/19.
//  Copyright © 2019 limbi garcia. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



void GasCost(double miles, double *gasTotalPtr);



void TripTime(double miles, double *totalTimePtr, int *hoursPtr, int *minutesPtr);



int main()
{
    
    // Declare 3 double variables (miles, gas, time)
    double miles, gas, time;
    
    // Declare 2 integer variables (hours,  minutes)
    int hours, minutes;
    
    // Greet the user
    printf("hello! welcome to this program.\n");
    
    // Ask and scan the number of miles being travelled.
    printf("how many miles will you be traveling?\n");
    scanf("%lf", &miles);
    
    
    // GasCost function call, remember to pass the miles and "address of" (&) gas to the function.
    // Print gas cost onto the screen.
    
    GasCost(miles, &gas);
    printf("\nthe cost of gas for your trip is $%.2f\n", gas);
    
    
    // TripTime function call, pass the miles, "address of"    time, "address of" hours, and "address of" minutes.
    
    TripTime(miles, &time, &hours, &minutes);
    printf("\nit will take you %d hours and %d minutes to get to your destination at a rate of 55 mph.", hours, minutes);
    
    return 0;
}

// Function Definitions
void GasCost(double miles, double *gasTotalPtr)
{
    // Calculate the cost of the gas on a trip
    // Declare, ask, and get the price per gallon and the mpg
    // Calculate and return (by reference) the cost of gas for the number of miles passed to the function
    // Make the total gas calculation for the number of miles
    // Store the result in the “value at” (*) gasTotalPtr

    double pricePerGal, mpg, result;
    
    printf("\nwhat is the price per gallon of gas?\n");
    scanf("%lf", &pricePerGal);
    
    printf("\nwhat are your mpg?\n");
    scanf("%lf", &mpg);
    
    result = (miles / mpg) * pricePerGal;
    
    *gasTotalPtr = result;

}


void TripTime(double miles, double *totalTimePtr, int *hoursPtr, int *minutesPtr)
{
    // Using a 55 MPH speed limit and the miles passed to the function
    // Calculate and return (by reference) the total time it will take as a double
    // Inside the function you will need to calculate total time using miles and speed 55 MPH
    // Store the result in the “value at” (*) totalTimePtr
    // Calculate the number of hours and number of minutes
    // One way to do the calculation:
    // int HOURS = (int)TOTALTIME
    // Cast the totaltime to an integer to get the number of hours
    // int MINUTES = (TOTALTIME - HOURS) * 60;
    // Subtract the hours from the total time and multiply by 60 to get the number of minutes
 
    
    double mph = 55, totalTime;
    
    totalTime = miles / mph;
    
    *totalTimePtr = totalTime;
    
    int hours = (int)totalTime;
    int minutes = (totalTime - hours) * 60;
    
    *hoursPtr = hours;
    *minutesPtr = minutes;
    
}



