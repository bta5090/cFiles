// Brook Azene
// How verification of input is done through character-testing, case-testing, character-mapping functions alongside use of string functions i.e. isalpha(), isdigit(), isupper(), islower(), toupper(), tolower(), strcat(), puts(), gets(). These functions allow you to decide exactly what input a program can recieve and use if logic to decide what happens based on the tests.

//! Must include ctype.h header file to use these functions

/*      isalpha()

            - returns True (1) if the value in its parentheses is an alphabetic character (a-z or A-Z)
            - returns False (0) if the value in parantheses is any other character
            
                E.g.

                        if (isalpha(input))
                        {
                            printf("Your input was a letter.\n");
                        }
        

        isdigit()

            - returns True (1) if the value in its parentheses is an number (0-9)
            - returns False (0) if the value in parantheses is any other character

                E.g.

                        if (isdigit(input))
                        {
                            printf("This is a number\n");
                        }
        

        isupper()

            - Checks if input is uppercase
            - Reduces amount of if statements you need to write 

                E.g.

                        if ((letter >= 'A') && (letter <= 'Z'))               if (isupper(input))
                        {                                                     {
                            printf("Letter is uppercase\n");                      printf("Letter is uppercase\n");
                        }                                                     }

        
        islower()

            - Checks if input is lowercase
            - Reduces amount of if statements you need to write


        toupper()

            - Returns the initial argument converted to a different case
            - Returned argument is a different case from the initial one i.e. lowercase to upper
            - Reduces the amount of if statements needed to test conditions

                E.g.

                        if ((input == 'Y') || (input == 'y'))           if (toupper(input) == 'Y')
                        {                                               {
                            printf("Yes\n");                                printf("Yes\n");
                        }                                               }
                        else                                            else
                        {                                               {
                            printf("No\n");                                 printf("No\n");
                        }                                               }
        

        tolower()

            - Returns the initial argument converted to a different case
            - Returned argument is a different case from the initial one i.e. uppercase to lowercase
            - Reduces the amount of if statements needed to test conditions

        
        strcat()

            - Merges two character arrays, as long the arrays hold strings (string concatenation)
            - Takes one string and appends it to the end of another
            - Requires two string arguments
            - Adds the second string in argument to the end of the first one
            - Depending on the data it is good to add spaces when initialising the strings so that the format is clear e.g. Full name, Address.
            - Because the second argument of strcat() is not changed, string literals can also be passed instead of a string character array.
            - //! Make sure that the first string array is large enough to hold both strings after concatenation. If this is not the case then using strcat() on a first string that's too small will cause errors.

            E.g.

                    char first[20] = "Brook";
                    char last[20] = "Azene";

                    strcat(first, last);
                    printf("%s", first);
        

        puts()

            - Easy way of printing strings
            - Sends a string to the screen
            * No formatting allowed (conversion characters)
            - //! printf() and scanf() aren't actually needed to do what puts and gets() can do for strings
            - Automatically places a newline at the end of every string it prints and don't need to manually do this unless an extra line is desired. DO NOT PUT NEWLINE INSIDE THE FUNCTION UNLESS NEEDED.
        

        gets()

            - Easy way of retreiving strings
            - Gets a strings from the keyboard
            - //! Converts the Enter keypress to null zero to make sure that the input retrieved from the keyboard winds up being a null-terminated string instead of an array of single characters.
            - The value of gets() is that unlike scanf() it can take strings with spaces e.g. full names. Scanf() cannot take strings with spaces and stops taking input at the first space so data issues will happen. */



// This program has two parts, the first gets a username and password and then uses various testing functions to check whether the password has met all the critera of uppercase, lowercase and digit characters. The second asks for two individual string inputs for city and town before concatenating them and printing them to the screen. 
#include <stdio.h>  //  printf() and scanf(), puts() and gets()
#include <string.h> //  strlen()
#include <ctype.h>  //  All character-testing, case-testing and character-mapping functions

int main() {

    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];    //  Initialised with enough space for various input lengths

    hasUpper = hasLower = hasDigit = 0; //  All initialised to False value

    printf("\nWhat is your username: ");
    scanf(" %s", user); // No operand because strings are array variables and already hold their base address

    printf("\nWhat is your password: ");
    scanf(" %s", password);


    //  Loop now utilises the test variables to figure out which conditions are True and False. Loop iterates over the length of the string using a incrementer in the argument. If any condition in the nested statements are True, the continue statement then goes on to the next ones since it's not necessary to check for that specific character anymore.
    for (i = 0 ; i < strlen(password) ; i++)
    {
        if (isdigit(password[i])) 
        {
            hasDigit = 1;
            continue;
        }
        if (isupper(password[i])) 
        {
            hasUpper = 1;
            continue;
        }
        if (islower(password[i]))
        {
            hasLower = 1;   //  Doesn't need continue statement because it's at the end of the loop
        }
    }

    //  This complex block of nested if statements concerns the type of output that prints to the screen depending on the password entered. The most outer statement checks whether the string length is longer than 5 characters before allowing any other arguments and conditions to be checked. If the outer block is False, then no other tests are done and the user is told that the password is too short. In the nested statements, each criteria for a good password is checked, and since there are three, all possible input combinations are tested for to make sure that all edge cases are accounted for and that there isn't an input that the program cannot verify as long as special key characters aren't used.
    if ((strlen(password) >= 6)) 
    {
        if ((hasDigit) && (hasUpper) && (hasLower))
        {
            printf("\n\nGood job %s, your password has met all the criteria.\n", user);
        }
        
        else 
        {
            printf("\n\nSorry but your password is not very good.\n");


            if ((hasDigit) || (hasUpper) || (hasLower)) 
            {
                if (hasDigit && !(hasUpper) && !(hasLower)) 
                {
                    printf("\nThe entered password only has a digit/s and no uppercase and lowercase letters.\n");
                }

                else if (!(hasDigit) && (hasUpper) && !(hasLower)) 
                {
                    printf("\nThe entered password only has uppercase letters and no digit/s or lowercase letters.\n");
                }

                else if (!(hasDigit) && !(hasUpper) && (hasLower)) 
                {
                    printf("\nThe entered password only has lowercase letters and no digit/s or lowercase letters.\n");
                }

                else if (hasDigit && !(hasUpper) && hasLower) 
                {
                    printf("\nThe entered password only has digit/s and lowercase letters but no uppercase letters.\n");
                }

                else if (hasDigit && hasUpper && !(hasLower)) 
                {
                    printf("\nThe entered password only has digit/s and uppercase letters but no lowercase letters.\n");
                }

                else if (!(hasDigit) && hasUpper && hasLower) 
                {
                    printf("\nThe entered password only has uppercase and lowercase letters but no digit/s.\n");
                }

            }
            else if (!(hasDigit) && !(hasUpper) && !(hasLower))
            {
                    printf("\nThe entered password doesn't have a digit, uppercase letters, or lowercase letters.\n");
            }
        }
    }
    else 
    {
        printf("\nThe entered password is too short. The password must have 6 or more characters that include ");
        printf("digits and uppercase and lowercase letters.\n");
    }   //  Testing for special characters would require an additional for loop to iterate over the possible types and also test variables that reflect the presence of such characters in the password.



/////////////////////////////////////////////////////////////////////////////



    char city[15];
    char state[3];  //  State initials are two letters but the third is for the null zero that comes after the two strings have been concatenated.
    char fullLocation[18] = ""; //  The string being appended needs to have space for both character arrays so the sum of the two is what the final string is initialised to.

    
    //  This function puts a newline at the end of every printed string i.e. no \n is needed at the end
    puts("\nWhat town or city do you live in?");    
    getchar();
    gets(city); //  Compiler warning can be ignored since a throwaway getchar() is used to capture the newline that puts() creates and the gets() function retreiving the second input.

    puts("\nWhat state do you live in?");
    gets(state);

    strcat(fullLocation, city);
    strcat(fullLocation, ", "); //  For proper formatting; as mentioned before string literals can be used instead of a second character array.
    strcat(fullLocation, state);

    fputs("\nYou live in: ", stdout);   //  Uses is explained in char2.c file
    fputs(fullLocation, stdout);
    printf("\n");   //  Reason for newline is because fputs() does not print a newline when the function's called
    

    return 0;
}