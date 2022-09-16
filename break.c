// Brook Azene
// Controlling while and for loops using the break and continue statements when you want to quit a loop early or repeat a loop sooner than it normally repeats.


/* The break statement rarely appears on a line by itself because it's normally found in the body of an if/else statement. The format is:

        break;

break always appears inside a loop. It is used to terminate the current loop it finds itself in. With nested loops it would exit to the outer loop which would then commence. To stop all nested loops the break statement needs to be in the outer-most one. When a loop ends the code that is next in line executes. 

**To print the % symbol, two % characters have to be used in printf(). C sees a % as a control code/format specifier unless there's two together. The first symbol is taken as the specifier so the percent sign is a specifier for itself. */

// ! break is used for terminations of while, do..while and for loops. It cannot exit from an if statement because it's not a loop




// Program takes in 25 test score inputs and outputs the average. If user inputs '-1' at any time then program will stop taking in test scores and average the scores already stored.
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("\n%d\n", i);
        if (i == 4)
        {
            break;
        }
    }

////////////////////////////////////////////////////

    int numTest;
    float stTest, avg, total = 0.0;

    for (numTest = 0; numTest < 25; numTest++)
    {
        printf("\nPlease submit a test score (Can only enter max 25 scores): ");
        scanf(" %f", &stTest);

        if (stTest < 0.0) // User can tell program to stop taking new scores and take average of the already inputted scores.
        {
            break;
        }

        total += stTest;
    }

    avg = total / numTest;

    printf("\nThe average is %.1f%%\n", avg);

/////////////////////////////////////////////////////

    int j;
    int num;
    printf("\nHow many numbers do you want to see?\n");
    scanf(" %d", &num);
    for (j = 1; j < 20; j++)
    {
        printf("\n Here's %d\n", j);
        if (j == num)
        {
            break;
        }
    }
    printf("\n");

    return 0;
}