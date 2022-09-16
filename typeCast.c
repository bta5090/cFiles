// Brook Azene
// How typecasting is useful for calculations of different data types etc.


/* Typecasting = a C typecast temporarily changes the data type of one variable to another:

    (dataType)value;

The dataType is what data type is desired e.g. float, int, long int etc. and the value is the variable, literal, or 
expression being targeted.

    int age = 6;

    (float)age;         >>>     age is now a float variable of value 6.0

    salaryBonus = salary * (float)age / 150.0; 

'Age' isn't a float, it just momentarily switches, everywhere else in the program that it's not typecast, it is 
still a int variable.

Continously typecasting the same variable in a program means that you might have made the wrong type at the start

This is necessary if you want to use 'age' in a expression with other floats, where you typecast age to float to
maintain consistency. This solves rounding problems when using different data types in an expression. 

*Never use a typecast with a variable on a line by itself

*You can typecast an entire expression e.g.

    value = (float)(number - 10 * yrsService);

The parantheses around the expression makes sure that the its result is a float rather than just the number 
variable. C does it's own auto typecasting i.e. if value was defined as a float at the start, it typecasts the 
preceding expression for you before storing the result in the value variable.

Typecasting is a good habit if you don't want to depend on C.   */


#include <stdio.h>

int main() {

    int age = 50;
    float height = 1.84;
    float num = 25.3;
    int random = 2;
    float dot;
    int salary;


    salary = random * (float)age / height;
    printf("Salary = %d\n", salary);
    printf("%d\n", age);

    dot = (int)(height * num);
    printf("Dot is %.2f\n", dot);

    return 0;

}
