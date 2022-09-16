// Brook Azene
// The continue statement has the opposite function of a break statement and tells a for/while/do..while loop to 'continue' onto the next iteration early. This is especially important in nested loops that are more complex. 


/* This is because there are cases where you don't want to execute the whole body of the loop for that iteration. Instead it will restart the loop with the next iteration. 

It's also used alongside an if statement like break. If you always wanted to continue */

// ! Never use break or continue without some kind of relational test before them i.e. if statement etc.


// This is a counting program where it counts up from 1 to 10 and while doing so tests whether each value of 'i' is odd or even. Depending on this condition [TRUE = continue executed, FALSE = loop carries on] one of two prompts is printed. 
#include <stdio.h>


 int main() {

     int i;

     for (i = 1; i <= 10; i++) 
     {
         if ((i % 2) == 1) // Because the remainders of odd numbers are 1, this condition is useful for testing for such numbers
         {
             printf("\n I am odd!\n");
             continue; // Skips the print statement outside the if statement if current iteration is odd number
         }
         printf("\n I am even!\n");
     }

     return 0;
     
 }