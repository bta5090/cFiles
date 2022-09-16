// Brook Azene
// Types of variables, naming them, defining them and storing data in them

/* char = holds character data e.g. 'x', '1' and '^'
   int = holds integer data e.g. 1, -32, 435533. range = -2.1 bil to 2.1 bil.
   float = holds floating-point data e.g. 25.6, -21.3, 0.00003
   double = holds extremely large/small floating-point values */

// long int == int

// Naming convention = 
    // Has 31 character length limit
    // Must start with (lower?) letter
    // Can use letters, numbers or underscore (lot of pre-made C variables start with _)
    // No spaces at all
    // No comma (special characters)

// Don't name variables with a C function or command name
    // If command name used, program does not run
    // If function name used , you can't use that same function of C later without causing error    

// Variables outside functions are global variables and local ones are declared/defined inside functions

#include <stdio.h>


int main() {

    char rank = 'A';
    int age = 21;
    int notes = 4;
    float weight;
    
    int salary, stockPrice; // Defining multiple variables of same type on one line is possible

    float percent = 56.3; // Can be defined with an initial value

    float favouriteNum = 0.5 * percent;

    int random = (age * notes) + favouriteNum;

    printf("Rank: %c\nAge: %d\nNotes: %d\nNumber: %.2f\nRandom: %d\n", rank, age, notes, favouriteNum, random);

    return 0;


}