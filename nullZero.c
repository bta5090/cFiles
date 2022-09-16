// Brook Azene

// How to store string data, finding length of strings, using character arrays (lists) and initialising strings

/* C adds a special zero to the end of every string (all are different names for the same thing)
    Null zero
    Binary zero
    String terminator
    ASCII 0
    \0 = called the backslash zero; enclose in single quotes to represent null zero in a string etc.  */

/* The null zero is how C knows it has reached the end of a certain string. 
    A character has a length of one e.g. 'x' but "x" is a length of two because of null zero at the end.
    * Length of a string = number of characters up to but excluding null zero e.g. "water" = 5, "August 10" = 9 etc.
    Always account for spaces when counting string length
    Without the brackets and optional specified string length, an array just becomes a normal character variable
    * Character arrays = hold strings in memory
    * Array = a list of variables of the same data type. Special type of variable that has a corresponding version 
    for each data type. */


/* Each piece of an array is called an element. E.g. the array "month[10]" has 10 elements with the tenth being 
   null zero. The subscript of the array is 0-9. 
   Each element is a character, and their combination (the array/list) holds the whole string */


#include <stdio.h> 
#include <string.h> // Need this header file to access the strcpy() function to replace/edit already created string arrays

int main() {

    char name[10];  // Empty character array defined with a set length of 10
                        /* ALWAYS reserve enough character array space to hold the longest string you will need
                           plus the null zero */

    name[0]= 'A';   // Once you define an array, you cannot replace it through the equals assignment operator
    name[1] = 'B';  // but this array was empty so we can insert characters into the array one by one.
    name[2] = 'C';
    name[3] = '\0';     /* When doing this manually you must never forget to add null zero at the end because
                        if there is already a string within the array and you don't set the new null zero, some
                        old data might carry over e.g. changing "January" to "March" would bring out "Marchry" */

    printf("%s\n\n", name); // To print a string, use the string conversion character = '%s'
    
    
    char month[] = "September";     /* This line is equivalent as writing "char month[10] = "September";" but
                                        this is only possible when the array is being DEFINED AND INITIALISED 
                                        (if you want to leave room then insert a big number) */

    printf("The month is %s\n", month);

    strcpy(month, "April"); // A function in c that is used to put a new string into an array and it adds the null zero itself.

    printf("The month is now %s\n\n", month);   // Checks if strcpy() is working

    
    char string[20] = "Washington";     // Array list of length 20 initialised with the string "Washington"

    printf("%c\n", string[9]);      // Testing the output of only one element in the array

    printf("%c\n", string[15]);     /* Tests what happens when calling an empty element after the null zero slot (nothing is printed to
                                        terminal) */

    return 0;
}