// Brook Azene
// Using the scanf() function alongside printf()

/* If printf() sends data to the screen as output, scanf() gets data from the keyboard. It's a built-in C function
   in all C compilers and shares the same header file as printf(). The function fills variables with data values
   entered by the user.

   It uses the same conversion characters as printf(). Its form is as follows > 
   
   scanf(" %format specifier", &variableName)

   Ampersand (&) is critical, as well as space before conversion character.

   When the program arrives at this function, C stops and waits for the user to enter a value/s. the variables
   listed inside the function i.e. variableName accept whatever values they enter as long as the format specifier
   is correct e.g. " %s".

   The function quits when the user presses enter to confirm the values. [creating new line at same time]

   Even if escape sequences are possible with this function, DO NOT USE THEM, especially = \n, \a or \t. This
   is because they confuse the function = when enter is pressed, scanf() quits so you don't need to use '\n'.

   Almost every scanf() should be preceded by printf() = paired because users are confused when to enter values
   since all C does is wait for input and doesn't show any prompts i.e. text output.

    e.g. printf("What is the amount?") >>>>>>>> The printf() requests data
         scanf(amount, 23434)          >>>>>>>> The scanf() retreives data     */



// This example will test examples of printf() and scanf() being used together

#include <stdio.h>

int main() {

    /* Always important to remember that scanf retreives data for ALREADY-EXISTING variables so always have some
        initialised for this purpose  */
    
    char firstName[20];
    char lastName[20];
    int age;
    char favouriteColour[20];


    printf("\nWhat is your first name?\n");
    scanf(" %s", firstName);    /* Arrays do not need the amperand (&) before the variable name, only 
                                    non-array variables need them */
                                // Pointer variables also don't need the ampersand (arrays are pointer variables)
                                // The space before the format specifier is a convention to follow for scanf()

    printf("\nWhat is your last name?\n");
    scanf(" %s", lastName);     // The input/user data must always match the data type of the conversion character

    printf("\nWhat is your age?\n");
    printf("Please enter age in this format: XX\n"); // Being descriptive means users insert the right data type in the correct format.
    scanf(" %d", &age);

    printf("\nWhat is your favourite colour?\n");
    scanf(" %s", favouriteColour);      /* scanf() stops taking input for a string after the first space so its 
                                            only good for one word. If the data needed is more than one word
                                            then you must use two scanf() statemnts [plus two printf()] and store
                                            them in their individual character arrays */ 

    printf("\nYour name is %s %s and you are %d years old. Your favourite colour is %s.\n", 
        firstName, lastName, age, favouriteColour);
    
    printf("\nIf you want to input data again please re-run this program\n\n");

    return 0;
}
