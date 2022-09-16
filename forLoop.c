// Brook Azene
// Using for loops as another way to repeat code but with more control.


/* for loops offer more control than while and do..while loops. for loops let you specify how may times you want to loop. Each loop type has its uses for different things. You can simulate a for loop with a while loop and vice versa when incrementing counter variables.

The format is:

        for (startExpression; testExpression; countExpression)
        {
            block of one or more C statements
        } 

When the for begins, the startExpression executes. It only executes only once in any for loop. Then testExpression is tested and if True (condition will be true the first iteration), the body of the loop executes. When the body of the loop finishes, countExpression executes. At this point the testExpression condition is checked to be true before the for loop body iterates again. 

E.g. 

        for (count = 1; count <=5; count++) 
        {
            printf("Counter is at %d.\n");
        }   */

// ! The statements inside for loops are executable since expressions like count = 1 are completed before the loop even begins.

/* The while version of the for loop above is:

        count = 1;
        while (count <= 5)
        {
            printf("Counter is at %d.\n", count);
            count++;
        } 
        
Both loop examples do the same exact thing. A do..while loop cannot imitate a for loop like while loops can because it performs the relational test after the body of the loop unlike while and for loops.

**for loops don't always increment, they can decrement too. BUT:    */

// ! for decrementing for loops, the initial value of the variable in the startExpression must be greater than the the testValue for the loop to execute. An infinite loop will start if this is not done.

/* If you put a for loop in the body of another for loop, you are NESTING the loops. The inner loop will execute as many times as the outer loop dictates. */




// Testing program of multiple for loops and their uses. 
#include <stdio.h>

int main() 
{
    int employees;
    int i;
    printf("\nHow many employees are there?\n");
    scanf(" %d", &employees);

    // For however many employees are inputted, loop prints an equal number of text.
    for (i = 1; i <= employees; i++)
    {
        printf("\nYou get a car!\n");
    }
    printf("\nEveryone gets a car!\n\n");

////////////////////////////////////////////////////////////
    // This loop decrements, and a rule for this case is that the initial value (10) must always be greater than the test value (0) for the loop to execute.
    int down;

    for (down = 10; down > 0; down--)
    {
        printf("\n%d...\n", down);
    }
    printf("\nBlast off!\n\n");

////////////////////////////////////////////////////////////
    // This for loop uses compound operators to increment with values greater than one.
    int magic;

    for (magic = 1; magic <= 12; magic += 3)
    {
        printf("%d, ", magic);
    }
    printf("\n\n");

////////////////////////////////////////////////////////////
    // This loop is a nest for loop, where the inner loop executes as many times as the outer loop dictates i.e. the outer loop moves towards 3 while the inner loop moves down towards 1.
    int outer;
    int inner;

    for (outer = 1; outer <= 3; outer++)
    {
        for (inner = 6; inner >= 1; inner--)
        {
            printf("%d", inner);
        }
        printf("\n");
    }
    printf("\n");

}