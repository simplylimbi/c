//
//  hw4.c
//  hw4
//
//  Created by Limbi Garcia on 9/28/18.
//  Copyright © 2018 Limbi Garcia. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>

// define

#define MAX_WEIGHT 500
#define MIN_WEIGHT 30
#define MAX_HEIGHT 90
#define MIN_HEIGHT 30
#define MAX_ITERATIONS 10

// protoypes/declaration

void banner(void);

// definitions

void banner(){
    printf("✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻\n");
    printf("Hello, and welcome. ♥︎ \n");
    printf("This is a program that will calculate the calories you'll burn.\n");
    printf("I'm going to ask you a few personal questions for accuracy.\n");
    printf("✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻\n");
    printf("\n");
} // EO banner()

void test(){
    // variables
    
    double dHeight;
    double dWeight = 0.0;
    int iAge;
    double dCaloriesPerMile;
    double dSteps = 0.0;
    double dCaloriesPerStep;
    double dCaloriesBurned = 0.0;
    double dStepsTotal = 0.0;
    char repeat;
    double dMan = 0.0;
    double dWoman = 0.0;
    int iGender = 0;
    int i = 0;
    double results [MAX_ITERATIONS];
    int sizeOfResults = 0;
    
    // welcome banner
    
    banner();
    
    /*
    printf("✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻\n");
    printf("Hello, and welcome. ♥︎ \n");
    printf("This is a program that will calculate the calories you'll burn.\n");
    printf("I'm going to ask you a few personal questions for accuracy.\n");
    printf("✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻✻\n");
    printf("\n");
    */
    
    
    // input
    
    while (i < MAX_ITERATIONS) {
        
        do{ // weight
            printf("▸ Please enter your weight in lbs between %d and %d lbs: ", MIN_WEIGHT, MAX_WEIGHT);
            scanf("%lf", &dWeight);
            if (dWeight < MIN_WEIGHT || dWeight > MAX_WEIGHT){
                printf("Sorry, you've entered an incorrect value, please try again.\n");
            }
        }while (dWeight > MAX_WEIGHT || dWeight < MIN_WEIGHT);
        
        do{ // height
            printf("▸ Please enter your height in inches between %d and %d in: ", MIN_HEIGHT, MAX_HEIGHT);
            scanf("%lf", &dHeight);
            if (dHeight < MIN_HEIGHT || dHeight > MAX_HEIGHT){
                printf("Sorry, you've entered an incorrect value, please try again.\n");
            }
        }while (dHeight > MAX_HEIGHT || dHeight < MIN_HEIGHT);
        
        do{ // age
            printf("▸ How old are you in years?: ");
            scanf("%d", &iAge);
            if (iAge < 0 ){
                printf("Invalid entry, please try again.\n");
            }
        }while (iAge < 0);
        
        do{ // how many steps for 1 mile ?
            printf("▸ How many steps did you take in only 1 mile?: ");
            scanf("%lf", &dSteps);
            if (dSteps < 0){
                printf("Invalid entry, please try again.\n");
            }
        }while (dSteps < 0);
        
        do{ // total steps ?
            printf("▸ How many steps have you taken in total?: ");
            scanf("%lf", &dStepsTotal);
            if (dStepsTotal < 0){
                printf("Invalid entry, please try again.\n");
            }
        }while (dStepsTotal < 0);
        printf("\n");
        
        
        
        // calculations
        
        dCaloriesPerMile = (0.57 * dWeight);
        dCaloriesPerStep = (dCaloriesPerMile / dSteps);
        dCaloriesBurned = (dStepsTotal * dCaloriesPerStep);
        dCaloriesPerMile = (0.5 * dWeight);
        dCaloriesPerStep = (dCaloriesPerMile / dSteps);
        dCaloriesBurned = (dStepsTotal * dCaloriesPerStep);
        
        results[sizeOfResults] = dCaloriesBurned;
        sizeOfResults++;
        
        dMan = (66 + (6.23 * dWeight) + (12.7 * dHeight) - (6.8 * iAge)); // for bonus
        dWoman = (655 + (4.35 * dWeight) + (4.7 * dHeight) - (4.7 * iAge)); // for bonus
        
        
        // output
        
        printf("For a casual walk you will burn ");
        printf("%0.2lf calories per mile.\n", dCaloriesPerMile);
        
        printf("You will burn ");
        printf("%0.3lf calories per step.\n", dCaloriesPerStep);
        printf("And you've burned %0.0lf calories in total.\n", dCaloriesBurned);
        
        printf("\n");
        
        printf("For a brisk walk you will burn ");
        printf("%0.2lf calories per mile.\n", dCaloriesPerMile);
        
        printf("You will burn ");
        printf("%0.3lf calories per step.\n", dCaloriesPerStep);
        printf("And you've burned %0.0lf calories in total.\n", dCaloriesBurned);
        printf("\n");
        
        printf("Would you like to record another walk?\n");
        printf("Please enter (Y/N).\n");
        scanf(" %c", &repeat);
        repeat = toupper(repeat);
        if (repeat != 'Y') break;
    }
    i =0;
    while (i<sizeOfResults){
        printf("Results[%d] = %.1lf\n",i ,results[i]);
        i++;
    }
    
    // BONUS
    
    printf("\n");
    printf("To see where you rank for a MAN press 1.\n");
    printf("For a WOMAN 1press 2.\n");
    scanf("%d", &iGender);
    
    switch (iGender) {
        case 1:
            if (dMan < dCaloriesBurned){
                printf("Calories burned is LOW.\n");
            }
            if (dMan == dCaloriesBurned){
                printf("Calories burned is AVERAGE\n");
            }
            if (dMan > dCaloriesBurned){
                printf("Calories burned is HIGH\n");
            }
            break;
            
        case 2:
            if (dWoman < dCaloriesBurned){
                printf("Calories burned is LOW.\n");
            }
            if (dWoman == dCaloriesBurned){
                printf("Calories burned is AVERAGE.\n");
            }
            if (dWoman > dCaloriesBurned){
                printf("Calories burned is HIGH.\n");
            }
            
        default:
            break;
    }
    
    
    // thank you banner
    
    printf("\n");
    printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("THANK YOU FOR USING THIS PROGRAM!\n");
    printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("\n");
    
   
}
