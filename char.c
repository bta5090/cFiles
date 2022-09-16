// Brook Azene
// How putchar(), getchar(), getch() and putch() functions can be used for I/O and can do things that printf() and scanf() cannot, and how getch() can make this process even faster.


    /*  putchar()

            - Sends a single character to the screen
            - For strings, would require character array to be looped through with putchar() as the body of the loop and after the loop is over one last putchar() is needed to push a new line.
        

        getchar()

            - Gets a single character input from the keyboard (this requires it be assigned to a variable at initial retrieval)
            - It appears on a line by itself, but this does nothing with the character it retrieves. Most C compilers will say that the statement is useless because it wouldn't be assigned to a variable. 
            - The getchar() character is usually type int. //! Integers and characters are the only two types that can be interchagned without any typecast errors.
            - The function keeps taking in characters until the user presses Enter at which point a break statement exits the for loop etc.
            - //! When getchar() is retrieving input, until the user presses Enter, it's storing the input into a memory buffer, which isn't released until Enter is pressed. When Enter is pressed the characters inside the buffer are released from the buffer one at a time. This allows the user to use Backspace to correct bad character input as long as Enter hasn't been pressed. 
            - REMEMBER THAT THE enter KEYPRESS IS LEFT ON THE INPUT BUFFER IF YOU DON'T GET RID OF IT.
            

                E.g.
                        printf("What are your two initials?\n");
                        firstInit = getchar();
                        lastInit = getchar();

                    - For "BA", firstInit wouldn't finish until the user presses Enter because 'B' only went to the buffer. When the user does this, 'B' goes to the program variable but Enter will still be left on the buffer. Which means that the second getchar() would send the Enter the buffer's holding into lastInit. This means that the 'A' is left waiting for a third getchar() to retrieve it.
                    - //! To solve this, we include additional getchar() placeholders that grab the Enter from user input but do nothing with it i.e. not assign to a variable. You will still get compiler warnings with this work-around but they can be ignored as long as the newline is being taken care of. Only one placeholder is needed since we can keep overwriting the same variable. There are three ways of getting rid of the newline with the first least efficient. For the last method, the user presses Enter after typing both initials and they will slot from the buffer into their respective variables. 

                    1)    printf("What are your two initials?\n");
                          firstInit = getchar();
                          n1 = getchar();
                          lastInit = getchar();
                          n1 = getchar();
                    

                    2)    printf("What are your two initials?\n");
                          firstInit = getchar();
                          getchar();
                          lastInit = getchar();
                          getchar();
                    

                    3)    printf("What are your two initials?\n");
                          firstInit = getchar();
                          lastInit = getchar();
                          getchar();
        

        getch()

            - A character input function that helps get rid of the Enter keypress that getchar() doesn't handle. 
            - //! It's an unbuffered = gets the input keypress from the user immediately and doesn't wait for the Enter input. The weakness is that the Backspace cannot be used to correct their input. Because there's no buffer, the input goes straight to the variable and using Backspace is not possible for the user. This is the advantage of getchar().
            - Requires all input to be correct because input is not modifiable after keypress
            - //! Doesn't require the Enter keypress
            - Doesn't require additional getch() to capture Enter keypress

            
            E.g.
                        printf("What are your two initials?\n");
                        firstInit = getch();
                        lastInit = getch();
            

            - //! getch() DOES NOT echo the input characters of the user to the screen like getchar() does. So to allow the user to see what they are inputting with each keypress, a mirror-image putch() is used.


            E.g.
                        printf("What are your two initials?\n");
                        firstInit = getch();
                        putch(firstInit);
                        lastInit = getch();
                        putch(lastInit);
        

        putch()

            - Used alongside getch()
        

        ! DON'T USE CHARACTER I/O FUNCTIONS ON CHARACTER VARIABLES. USE INTEGER TYPE INSTEAD      */




// This program has two parts; 1) Takes an existing character array and prints it out one character at a time to the screen. 2) Takes input one character at a time into a character array then prints the array to the screen backward.
#include <stdio.h>  //  putchar(), getchar(), getch(), putch()
#include <string.h> //  Needed for strlen() function

int main() {

    int i;

    char msg[] = "C is fun";

    printf("\n");
    for (i = 0 ; i < strlen(msg) ; i++)
    {
        putchar(msg[i]);    //  Prints one character for every iteration
    }

    putchar('\n');  //  Line break after loop is done




    int j;

    char msg2[25];  //  Defined array for user input

    printf("\nType up to 25 characters then press Enter: ");
    for (j = 0 ; j < 25 ; j++) 
    {
        msg2[j] = getchar();    //  For loop iterates up to 25 characters inputs while getchar() retrieves input

        if (msg2[j] == '\n')    //  Condition checking if Enter pressed to break out of loop at any time.
        {
            j--;    // Decrements integer j if current iteration was a Enter keypress (doesn't count as input)
            break;
        }
    }

    putchar('\n');

    for (; j >= 0; j--) //  For loop printing out array in reverse; reason for decrement
    {
        putchar(msg2[j]);
    }

    putchar('\n\n');


    return 0;

}
                    