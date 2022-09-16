// Brook Azene
/* How 'if' lets programs make decisions and execute certain statements based on the results of those decisions.
    by testing contents of variables etc. */

/* The if statement uses relational operators to perform data testing in the format:

    if (condition) 
    { block of one or more C statements; }

The parantheses are always required, the condition is the relational test using two values and a relational operator
and the block of C statements is the body. The braces are required if the if statement contains more than a single
statement.

**Even though they're not required, use braces even when there's only one statement in the body. It makes it 
easier when you want to add more later on. If the braces enclose more than one statement, it is a compound
statement. */

// NEVER put semi-colons after if or else, they only go after completed executable statements inside those blocks

/* This program will ask user for birth year and calculate their age in current year. Tells user if they were born
in leap year */
#include <stdio.h>
#define CURRENTYEAR 2021 // Good variable to define before main() in case program is used in different year.

int main() {

    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);


    /* Simple attempt at validating the data from user so that a wrong output isn't sent. This statement will only
        run if input is after current year */
    if (yearBorn > CURRENTYEAR) {

        printf("You can't be born in %d! We're still in %d!\n", yearBorn, CURRENTYEAR);
        printf("Please try again with a past year or the current one. What year were you born?\n");
        scanf(" %d", &yearBorn); /* If the second input failed the condition then the program just goes on so 
                                    another type of conditional statements called do...while loops are what's 
                                    needed to keep looping until the correct data is inputted. */
    }

    age = CURRENTYEAR - yearBorn;

    printf("Wow you are going to be %d years old this year!\n", age);

    // Checks if year is a leap year (Only leap years are divisible by 4 without a remainder; doesn't run if not)
    if ((yearBorn % 4) == 0)  {

        printf("You were born in a leap year, that's cool!\n");
    }

    return 0;
}