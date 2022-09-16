/* Brook Azene

/* The first line of the program #include <stdio.h> is a preprocessor command 
which tells a C compiler to include stdio.h file before going to actual compilation.
stdio.h is a standard C library that includes functions such as printf() */
#include <stdio.h>  // Stands for standard I/O


/* the main() function where the program execution begins. This function is necessary for all C programs */

int main() {
    
    /* this is the printf() function to print text specified within the quotation marks */
    printf("\nHello world \n");
    /* this return command is needed since the main() function is a int type and so must return an integer.
    If the returned value is zero (True) then the program was able to execute fully and if the returned value was 
    one (False) then there was an error when compiling or running the program. */
    return 0;

}