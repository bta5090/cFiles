// Brook Azene
// How the switch statement is more efficent than a long chain of if statements for handling large condition sets (multiple conditions). It analyses the value of an integer or character variable and executes one of several sections of code called cases.


/*  The switch statement is used for situations where the if statement is not efficient to apply. This is because switch statement is a good use case when testing more than two or three conditions/values. An if statement is very good for testing between two or three conditions but for larger sets of values or conditions extensive else-if statements need to be used which are less efficient than the switch statement. An example of this is when creating  a menu of choices and waiting for user input (UI). This would be a good choice for switch statements. 

*** The switch variable can be either integer or character variables BUT NOT float or double variables i.e. floats and doubles can't be matched properly.

*** Cases don't need to be arranged in any order i.e. even default need not be the last case. For efficiency, put the most common case possibilities at the top of the switch statement so C doesn't search down the statements to find the matching case.

*** Braces are not needed for enclosing each case but with more complex code they make it easier to read.

    E.g.    if (condition)                               switch (variable/input)
            {                                            {
                body;                                       case (expression1) :  one/multiple C statements;  
            }                                                                     break;
            else if (condition)                             case (expression2) :  one/multiple C statements;  
            {                                                                     break;
                body;                                       case (expression3) :  one/multiple C statements;
            }                                                                     break; 
            else if (condition)              VS.         //! No. of cases depend on how many values tested
            {                                               default :  one/multiple C statements;
                body;                                                  break;
            }                                            //! default is for when variable matches none of the cases
            else if (condition)                          //! and it is OPTIONAL but RECOMMENDED.
            {                                            }   
                body;
            }
            else 
            {
                body;
            }              
            
    The default case essentially works like how 'else' executes when the initial if condition is false. So default only executes if none of the other case conditions match with the switch variable. */
    
    //! It is optional to use but it's good programming practice to use it for handling unexpected switch values/edge cases. It's also essential to use break statements at the end of each case including default so that only the matching condition is executed. default also needs one since adding more cases at the end will help prevent any errors.




// This program is a non-working UI menu as it requires the use of function-calling to execute with real results. It demonstrates how switch can be applied to process a user's input according to available choices presented.
#include <stdio.h>
#include <stdlib.h>     // This header file is needed to use the exit() function

int main() {

    int choice; // Used to store the input from user

    printf("\nWhat do you want to do?\n\n"); // User prompt
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");


    do {    
        // do...while loop to allow use of switch function. Because this program is not fully implemented the loop is not really effective but in real use, it will keep prompting for input after each execution until the user exits.

        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
        
        switch (choice) {

            case (1) : { printf("\nTo add a contact you will need the contact's First name, Last name, ");
                         printf("and number.\n\n");
                         break;
            }
            
            case (2) : { printf("\nEnter the name of the contact you wish to change.\n\n");
                         break;
            }

            case (3) : { printf("\nWhich contact do you wish to call?\n\n");
                         break;
            }

            case (4) : { printf("\nWhich contact do you wish to text?\n\n");
                         break;
            }

            case (5) : { exit(1);   
            /* Difference between exit() returning a value:
                 exit(1) = means exit failure and that the program had to exit for whatever reason and wasn't able to completely execute all code. 
                 
                 exit(0) = means exit success and that the program intentionally exited after fully executing all code in the program. */
            }

            default : { printf("\n%d is not a valid choice.", choice);
                        printf("Please try again\n\n");
                        break;
            }

        }
    } while ((choice < 1) || (choice > 5)); //  Only runs while one or both conditions are True

    return 0;
    
}






