// Brook Azene
// The else statement and how to specify what happens when a relational test is false.


/* The if statement writes the course of action when runs when the relational test of two values is true. The else
    statement is what is carried out when the relational test is false. Their combined format is:

        if (condition) 
        { block of one or more C statements; }
        else
        { block of one or more C statements }

    One of the segments will run depending on which result the relational test is:

        True = if statement runs
        False = else statement runs */
    
    // Like if, else does not need braces if it only holds one statement but it's a good habit


// This is the same program from the ifElse.c but now including else statements
#include <stdio.h>
#define CURRENTYEAR 2021

int main() {

    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);


    // Doesn't allow for re-input if condition is met i.e. program ends, but continues if condition is false 
    if (yearBorn > CURRENTYEAR) {
        printf("Wow you were born in %d?! We're still in %d Time Traveler!\n", yearBorn, CURRENTYEAR);
    }
    else {
        age = CURRENTYEAR - yearBorn;

        printf("Wow you are going to be %d years old this year!\n", age);

        // This if statement is called a nested statement because it's embedded in the else statement
        // Checks if year is a leap year (Only leap years are divisible by 4 without a remainder; doesn't run if not)
        if ((yearBorn % 4) == 0)  {
            printf("You were born in a leap year, that's cool!\n");
        }

    }

    return 0;
}