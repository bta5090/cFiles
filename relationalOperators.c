// Brook Azene
// Relational operators and their functions


/*  Relational operators compare two values i.e. variable, literal or expression (or a combo of any) on each side
    of the operator. 

    DO NOT USE THESE OPERATORS DIFFERENT DATA TYPES TO EACH OTHER I.E. USE A TYPECAST.

        Relational Operator                 Description
                
                ==                          Equal to
                
                >                           Greater than
                
                <                           Less than
                
                >=                          Greater than or equal to
                
                <=                          Lesser than or equal to
                
                !=                          Not equal to

    A regular operator produces a mathematical result. A relational operator produces a True or False result. When
    comparing the two data, the data values produce either a True comparison or they don't. 

        int i = 5;              i == l; (True)          i > j;  (False)
        int j = 10;             j < k;  (True)          k < j;  (False)
        int k = 15;             k > i;  (True)          k == l; (False)
        int l = 5;              j != l; (True)

    Every time C evaluates a relational operator a value of 1 or 0 is produced.

        True = 1
        False = 0
    
    E.g.        a = (4 < 10);       The expression in the parantheses is true so a 1 is put in a
                b = (8 == 9);       The expression in the parantheses is false so a 0 is put in b  */


#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    a = (a == e);
    printf("a = %d\n", a);
    b = (c > d);
    printf("b = %d\n", b);
    c = (a != e);
    printf("c = %d\n", c);
    d = (d < c);
    printf("d = %d\n", d);
    e = (a <= c);
    printf("e = %d\n", e);

    return 0;
}


