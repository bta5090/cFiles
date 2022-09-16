// Brook Azene
// Why the NOT operator can simplify code but also complicate it at the same time.


    /* When trying to test for when a certain variable has attained a value of zero, the if condition can look like this:
            if (count == 0) ....
    
    Another way (simple but confusing) is:
            
            if (!count) ....
    
    The NOT is sometimes confusing when reading code so it's can be clearer to just write it normally. */




    // This program uses the AND operator to print one message if user's last name starts b/w letter P and S and prints another if any other letter.
    #include <stdio.h> 

    int main() {
        // Character array is defined and initialised to take in input from scanf()
        char name[25];
        // Prompt for user to enter their input
        printf("\nWhat is your last name? ");
        printf("Please capitalise the first letter!\n");
        scanf(" %s", name); // **Don't need the ampersand for arrays when specifying variable location

        // The commented condition looks for edge cases where the input doesn't have the first letter in upper case
        // Without the AND operator everyone would meet the special criteria
        if ((name[0] >= 'P') && (name[0] <= 'S') /*|| (name[0] >= 'p') && (name[0] <= 's')*/) {

            printf("\nCongratulations, your name met the special criteria!\n");
        }
        else {

            printf("\nUnfortunately, you didn't meet the criteria but your name sounds great!\n");
        }

////////////////////////////////////////////////////////////////////////////////

        char ans;

        printf("\nDo you think your name is special? ");
        printf("If Yes type 'Y' and if No type 'N'.\n");
        scanf(" %c", &ans);

        if ((ans == 'Y') || (ans == 'N')) {

            if (ans == 'Y') {

                printf("\nThat's great, I think so too!\n\n");
            }
            else if (ans == 'N') {

                printf("\nOh no that's a shame, I think your name's pretty great!\n");
            }
        }
        else {

            printf("Sorry but you didn't enter 'Y' or 'N'. Try again next time!\n");
        }

        return 0;
    }