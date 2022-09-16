// Brook Azene
// This program will test math operators and the different division types



#include <stdio.h> 

int main() {

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;


    floatAnswer = a / b; // Answer is 3.8 as a float
    printf("\nThe division of %.1f by %.1f is %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y; // Integer division will never round up e.g. For 19/5 = 3.8, the answer is 3.0
    printf("\nThe division of %d by %d is %.1f\n", x, y, floatAnswer); /* A few things to note: you can put the 
                                                                            int result into floatAnswer but when 
                                                                            printing, the conversion character has
                                                                            to be a float i.e. the result is 3 
                                                                            because two integers are being divided,
                                                                            but the output will be 3.0. */


    intAnswer = a / b;
    printf("\nThe division of %.1f by %.1f is %.1d\n", a, b, intAnswer); // Above comment applies to this statement

    intAnswer = x % y;
    printf("\n%d modulus (remainder of) %d equals %d\n", x, y, intAnswer);

    
    int jack = 5;
    int sarah = 4;
    int dave = 2;
    int sum;

    float duck = 2.5;
    float apple = 5.5;
    float ans;
    float negative = 1.5; // This is going to be a negative number

    sum = (jack + sarah) * dave; // Addition and multiplication

    printf("\n%d\n", sum);

    ans = duck + apple - - negative; // Negative number

    printf("\n%.1f\n", ans);


    float final;
    final = sum + ans;
    printf("\n%.2f\n", final);



}