// Brook Azene
// How to use sizeof() and learning the difference b/w it and strlen().


/* sizeof() is a operator that finds the number of memory locations it takes to store values of any data type e.g. most C compilers use 4 bytes to store integers. To find this out for each data type you can do:

        i = sizeof(int);
        f = sizeof(float); 
        s = sizeof(string);
        d = sizeof(double);
        
What the sizeof() operators above do is they find the respective number of memory locations that each data type takes up and then assign that value to their respective variable. This operator works on both data types AND variables e.g. arrays. 

E.g. 

        char name[] = "Ruth Claire";
        int i = 7;
        
        printf("The size of i is %d.\n", sizeof(i));
        printf("The size of name is %d.\n", sizeof(name));

Depending on the compiler used, the size of 'i' will output as 4. The size of the character array 'name' will come out as 12, because it includes the null zero at the end of the array.

****The length of a string and the size of a string are two different values:

        Length of a string = # of bytes up to BUT not including the null zero          >>>>        strlen()
        
        Size of a string = # of characters it takes to hold the string including the null zero. */




// Testing how to use sizeof() operator and strlen()
#include <stdio.h>


int main() {
    
    // The data type that sizeof() returns into the format specifier is unsigned long which requires the '%lu' specifier.
    printf("\n%s requires %lu memory locations\n", "Integers", sizeof(int));
    printf("\n%s requires %lu memory locations\n", "Floats", sizeof(float));
    printf("\n%s requires %lu memory locations\n", "Characters", sizeof(char));
    printf("\n%s requires %lu memory locations\n\n", "Doubles", sizeof(double));

    return 0;

}