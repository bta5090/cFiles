// Brook Azene
// How to use the built-in technical functions to perform advanced math that operators cannot do alone


/*  C has built-in math functions that supply the function routine for the desired calculation. Most are highly    
    technical and used for complex math calculations.
    
    ! To use any of the built-in math functions in C, the math.h header file must be listed alongside stdio.h in the preprocessor commands. Also, there's a subset of functions inside math functions called numeric functions that are not so much for calculating, but for converting numbers to and from other numbers.


    NUMERIC FUNCTIONS (Conversion)

            floor()
            - Called floor function
            - E.g. floor(5.8) >>>>  5.0
            * This function also works with negative numbers i.e. -17.5 would go down to -18.0
            - Pushes down non-integers to their next-lower integer values i.e. rounds down to next whole number
            * Although it converts its argument to integer values, the value the function actually returns is a float value and so the conversion character needed when formatting a string in printf() is '%f'.
            - The returned value is what's stored after the conversion

                E.g.

                        lowVal1 = floor(18.5);  //  Stores 18.0
                        lowVal1 = floor(-18.5);  //  Stores -19.0


            ceil()
            - Called ceiling function
            - E.g. ceil(5.3) >>>>  6.0
            * This function also works with negative numbers i.e. -17.5 would go up to -17.0
            - Pushes up non-integers to their next-higher integer values i.e. rounds up to next whole number
            * Although it converts its argument to integer values, the value the function actually returns is a float value and so the conversion character needed when formatting a string in printf() is '%f'.
            - The returned value is what's stored after the conversion

                E.g.

                        highVal1 = ceil(18.5);  //  Stores 19.0
                        highVal1 = ceil(-18.5);  //  Stores -18.0



            abs()
            - Returns the integer absolute value of any given integer argument
            * The absolute value of any given positive or negative number is the positive version of the number
            - Useful for computing differences in ages, weights, and distances. This is because the difference must always be positive.
            * To printf floating point answers without decimal places, the conversion code inside the string must be '%.0f'.

                E.g.    As mathematic formula the below is True

                        abs(25) == abs(-25) == 25

            
            fabs()
            - Returns the floating-point absolute value of any given integer argument
            * The absolute value of any given positive or negative number is the positive version of the number
            * To printf floating point answers without decimal places, the conversion code inside the string must be '%.0f'.
            
                E.g.    As mathematic formula the below is True

                        fabs(25.0) == fabs(-25.0) == 25.0

                        printf("\nAbsolute value of 25 is %.0f\n", fabs(25.0));
            
    

    MATH FUNCTIONS (Algebraic, Trignometric and Logarithmic)

            pow()
            - Raises a value to a power

                E.g.

                        x = pow(4, 6);  //  Computes to 4096, which becomes the value of the variable x


            sqrt()
            - Returns the square root of a value
            * Cannot compute the square root of a negative number. The fabs() function can be used to convert the value to a positive value before the square root is computed.

                E.g.

                        x = sqrt(25);   //  Computes to 5, which becomes the value assigned to variable x
        

        ! TRIGONOMETRIC FUNCTIONS

            * Each of these functions require an argument expressed in RADIANS. To supply an argument in degrees, convert degrees to radians with this:


                                    radians = degrees * (3.14159 / 180.0);  //  Supply radians variable to function


            cos(x)
            - Returns the cosine of the angle x

            sin(x)
            - Returns the sine of the angle x

            tan(x)
            - Returns the tangent of the angle x

            acos(x)
            - Returns the arc cosine of the angle x

            asin(x)
            - Returns the arc sine of the angle x

            atan(x)
            - Returns the arc tangent of the angle x
        


        ! LOGARITHMIC FUNCTIONS

            exp(x)
            - Returns 'e', base of the natural logarithim, raised to a power specified by 'x' i.e. (e^x)

            log(x)
            - Returns the natural logarithim, of the argument x, mathematically written as ln(x).
            ! x must be positive

            log⋎10(x)
            - Returns the Base10 logarithim of the arugment x, mathematically written as log10(x).
            ! x must be positive

 */



/* This program shows the use cases of various functions from the math.h library.
! This is a very basic program but given time, it can be modified to be a question sheet of some basic math questions that the user must respond to and for each user input for the answers to the math questions given, the program prints to the screen to say whether the answer was right or wrong. 
*/
#include <stdio.h>
#include <math.h>

int main() {

    printf("\nIt's time to do your maths homework!\n");

    printf("\nSection 99: Square Roots\n\n");
    printf("The square root of 49.0 is %.1f\n", sqrt(49.0));
    printf("The square root of 149.0 is %.1f\n", sqrt(149.0));
    printf("The square root of 0.149 is %.3f\n\n", sqrt(0.149)); 

    printf("\nSection 2: Power\n\n");
    printf("4 raised to the 3rd power is %.1f\n", pow(4.0, 3.0));
    printf("7 raised to the 5th power is %.1f\n", pow(7.0, 5.0));
    printf("34 raised to the 1/2 power is %.1f\n\n", pow(34.0, 0.5));
    
    printf("\nSection 3: Trigonometry\n\n");
    printf("The cosine of a 60-degree angle is %.3f radians\n", cos((60 * (3.14159 / 180.0))));
    printf("The sine of a 90-degree angle is %.3f radians\n", sin((90 * (3.14159 / 180.0))));
    printf("The tangent of a 75-degree angle is %.3f radians\n", tan((75 * (3.14159 / 180.0))));
    printf("The arc cosine of a 45-degree angle is %.3f radians\n", acos((45 * (3.14159 / 180.0))));
    printf("The arc sine of a 30-degree angle is %.3f radians\n", asin((30 * (3.14159 / 180.0))));
    printf("The arc tangent of a 15-degree angle is %.3f radians\n\n", atan((15 * (3.14159 / 180.0))));

    printf("\nSection 4: Log functions\n\n");
    printf("e raised to the 2 is %.3f\n", exp(2));
    printf("The natural log of 5 is %.3f\n", log(5));
    printf("The base-10 log of 5 is %.3f\n\n", log10(5));

    return 0;

}
