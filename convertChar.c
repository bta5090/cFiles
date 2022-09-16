// Brook Azene
// Testing how to convert and output data using conversion characters

#include <stdio.h>

int main() {

    printf("%d %s will cost $%f and %c will cost $%d\n", 5, "playstations", 2499.99, '1', 500);
    /* %d = integer
       %f = floating-point ------ in C, the default is to write floats up to six decimal places in the output
       %c = character
       %s = string */

    // ARGUMENTS MUST BE IN SAME ORDER AS FORMAT SPECIFIERS (conversion characters)

    printf("%f,  %.6f,  %.5f,  %.4f,  %.3f,  %.2f,  %.1f\n", 8.1234, 8.1234, 8.1234, 8.1234, 8.1234, 8.1234, 
        8.1234);
    // Using a period and number between modulus and f controls how floating-points are printed
    // The number determines the number of decimal places the floating-point number prints to.

    return 0;
}