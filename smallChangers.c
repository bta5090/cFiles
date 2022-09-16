// Brook Azene
// Using incrementing and decrementing (small-change) operators to compile code efficiently and run faster commands.


/* The increment and decrement operators only work on one argument. The increment operator adds 1 to a variable and the decrement operator subtracts 1 from a variable. These operators are used when counter variables are needed e.g. inventory level. Compound operators are one way to increment and decrement values of variables and the increment/decrement operators are another way:

            Operator            Function

              ++                 Adds 1

              --               Subtracts 1

E.g.

        count++;        postfix increment operator
    OR
        ++count;        prefix increment operator


        count--;        postfix decrement operator
    OR
        --count;        prefix decrement operator


Either example is a correct way of adding one to a variable. The operators can go either side of the variable. 

**NEVER USE THESE OPERATORS WITH LITERAL CONSTANT OR EXPRESSION     >>>     14++;

When used by themselves prefix and postfix have the same result but when combined with other expressions there is a priority to how the operation is executed:

        int i = 2, j = 5, n;
        n = ++i * j;

Figuring out what 'n' is after the expression and when exactly 'i' increments is the idea. The answer is whether the placement is prefix or postfix. If the operator is prefix then C computes it before anything else on the line. If it is postfix then C computes it after everything else on the line finishes. So that means 'n' = 15 since 'i' increments first. If it was a postfix then 'n' would be 10 but 'i' would still be 3. Incrementing/decrementing a variable in the same expression means less work and efficient code. */



// This program is the same as the first counter program using compound operators, but now using increment and decrement operators to reduce the code.
#include <stdio.h> 

int main() {

    int count = 0;

    // Moving the operators to the left or right can show how different outputs can result 
    printf("\nCounter is at %d.\n", ++count);
    printf("\nCounter is at %d.\n", ++count);
    printf("\nCounter is at %d.\n", ++count);
    printf("\nCounter is at %d.\n", ++count);
    printf("\nCounter is at %d.\n", ++count);

    printf("\nCounter is at %d.\n", --count);
    printf("\nCounter is at %d.\n", --count);
    printf("\nCounter is at %d.\n", --count);
    printf("\nCounter is at %d.\n\n", --count);

    return 0;
}