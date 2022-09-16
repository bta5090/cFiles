// Brook Azene
// Using the do..while loop for situations where loop must execute at least once. Applied to create a calculator.


/* while is also used alongside the do statement. Together they act most like a while loop. The format is:

        do
        {block of one or more C statements}
        while (condition)

Both statements act as wrappers of the body, which needs braces for more than one statement. This loop type is used when the loop must execute at least once. The reason the while is at the bottom of the loop so that C can execute the body at least once before checking the condition. */



// Program asks for input from user twice then outputs the result of the calculation. As long as user responds to prompt with a certain character the program will continue.
#include <stdio.h>

int main () 
{

    float num1, num2, product;
    char answer;

    do
    {
        printf("\nYou can multiply any two numbers you like. Enter the first number: ");
        scanf(" %f", &num1);    // Even if program wants floats, the input is changed to the desired data type when assigned to variable

        printf("\nEnter the second number: ");
        scanf(" %f", &num2);

        product = num1 * num2;
        printf("\n%.2f x %.2f = %.2f.\n\n", num1, num2, product);

        printf("Do you want to try multiplying two other numbers? ");
        printf("Enter Y or N: ");
        scanf(" %c", &answer);

        // ! This if statement ensures that only the correct input is received or else loop breaks. Also, it accounts for edge cases where the user does not enter upper case input as specified by program. toupper() is a built-in function that can simplify testing for upper case inputs. 
        if (((answer != 'Y') && (answer != 'y')) && ((answer != 'N') && (answer != 'n'))) 
        {
            printf("\nError! You did not enter any of the correct options. Restart program to try again.\n\n");
            break;
        }
        else if (answer == 'y') 
        {
            answer = 'Y';
        }
    }
    while ((answer != 'n') && (answer != 'N')); // Use of logical operators here to account for lower case 'n'. 

    return 0;
}