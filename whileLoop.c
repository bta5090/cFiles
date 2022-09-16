// Brook Azene
// How to use while loops and do..while loops to perform repetitive tasks


/* A loop is a section of code that repeats a few times. A loop that repeats forever is an infinite loop. A loop is supposed to come to a conclusion when they finish doing the job they were set up to do. A loop is good for repetitive and simple tasks that computers can do well.

There are two types of while loops:

        while
        
        do..while

The while statement appears at the beginning or end of a loop. The format is:

        while (condition)
        {block of one or more C statements}

The condition is a relational test just like the one found in an if statement. The body of the loop is where the block of statements are located. As long as the condition is true the body of the while loop repeats. Both a if statement and while loop need braces for a body with more than one statement. 

**Do not put a semi-colon after the paranthesis of the condition, it only follows the statements inside the body. */

// ! You must change a variable inside the while loop's condition somehow or it will looop forever. This is because it will test the same condition each time if the condition isn't changing and not stop i.e. the condition must eventually become false to end the while loop and the rest of the program executes. 


// ! Just like an if statement, a while loop's body may never execute if the condition is false the first time



// Program to test while loops using a counter variable
#include <stdio.h>

int main() {

    int count = 0;

    while (count < 5) 
    {
        printf("\nCounter is at %d.\n", ++count);   // If count wasn't incremented in the while loop,printf()                                           would execute forever until you stopped it i.e. Ctr+Break.
    }
    
    while (count > 1) 
    {
        printf("\nCounter is at %d.\n", --count);
    }

    return 0;
}