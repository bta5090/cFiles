// Brook Azene
// How logical operators enable the testing of more conditions without nested if/else statements.


/* Logical operators allow more than one relational test in a single if statement to test more conditions i.e. they
    combine relational operators (hence they're also called compound relational operators). These operators appear
    between two or more relational operators. Another word for logical is boolean***
    Three such operators exist:

        Logical Operator            Meaning             Priority
               
               &&                     And                  Mid
               
               ||                      Or                  Low
               
                !                     Not                  High
    
    
    E.g.    if ((age > 21)) && (age <= 65))                 Both conditions must be true for statements to run
            { }

            if ((hrsWorked > 40) || (sales > 25000.00))     At least one or both must be true for statements to run
            { }

            if (!(isCharterMember))  If true, it negates to false and skips, and if false, it negates to true and runs
            { }
    
    If two relational operators are used alongside a logical operator, or a relation has been negated (!), that 
    means that ENTIRE expression needs parentheses after the 'if'.

    '!' negates a true or false condition. If the condition becomes true, the operator flips it to false and vice
    versa. However, there is a way to not rely on this operator and instead reverse the logic of the condition. Use
    an opposite relational operator to do this:

        if (!(sales < 3000))

        if (sales >= 3000)  */






/* This program, using defined variables and expressions, applies relational and logical operators to test them
    against each other. */
#include <stdio.h> 

int main() { 

    // Int variables defined and intialised for program
    int planets = 8; 
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;


    /* This logical statement uses the AND operator to test whether the cast of Friends and the Beatles would have enough people to make a baseball team AND the cast of Friends and the Avengers would have enough people to field a football team. If true, the first block of statements will print */
    if ((friends + beatles >= baseball) && (friends + avengers >= football)) {

        printf("\nThe cast of Friends and the Beatles could make a baseball team, \n");
        printf("AND the cast of Friends plus the Avengers could make a football team.\n");
    }
    else {

        printf("Either the Friends cannot make a baseball team with the Fab Four, \n");
        printf("OR they can't make a Gridiron Gang with the Avengers (or both!)\n");
    }


    /* The second logical statement uses the OR operator to check if either Star Wars or Harry Potter have more parts than months in a year. If either OR both are true, the first block of statements will print */
    if ((starWars <= months) || (potterBooks <= months)) {

        printf("\nYou could read one Harry Potter book a month, \n");
        printf("and finish them all in less than a year, \n");
        printf("OR you could see one Star Wars movie a month, \n");
        printf("and finish them all in less than a year.\n");
    }
    else {

        printf("Neither can happen -- too many books or movies, \n");
        printf("not enough time!\n\n");
    }


    /* This last logical statement checks if whether the sum of baseball and basketball players is NOT greater than that of the football team. If false, the first block of statements are skipped and the else section of code prints to console. This is because of the NOT operator. It flips whatever result arrives from the set condition. If the condition had been true, the first block would have ran instead. */
    if (!(baseball + basketball > football)) {

        printf("\nThere are fewer baseball and basketball players");
        printf(" combined than football players.\n");
    }
    else {

        printf("\nThere are more baseball and basketball players combined than ");
        printf("football players.");
    }

    return 0;
}
