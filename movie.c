#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct{
    //Fill in the following fields: Name, Rating (out of 10), Year of Release and Director.
    char name[100];
    int rating;
    int year;
    char director[100];

}movies;


int main()
{

    movies list[SIZE];

    for(int i = 0; i < SIZE; i++){

        fflush (stdin);

        printf("\nwhat is the movie name?\n");
        gets(list[i].name);

        printf("\nwhat is the rating (up tp 10)?\n");
        scanf("%d", &list[i].rating);

        printf("\nwhat is the year of release?\n");
        scanf("%d", &list[i].year);

        fflush (stdin);

        printf("\nwho is the director?\n");
        gets(list[i].director);

    }

    for(int i = 0; i < SIZE; i++){

          printf("\n%s", list[i].name);
          printf("\n%d", list[i].rating);
          printf("\n%d", list[i].year);
          printf("\n%s", list[i].director);

    }

    return 0;
}
