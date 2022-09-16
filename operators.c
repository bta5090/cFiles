// Brook Azene
// Learning order of operators, assignment, paranthesis use and doing arithmetic


/* Operators are what allow you to do math in C programs. The operators have a certain order and C doesn't always
   calculate from left to right (BIDMAS). An expression includes one or more operators. Most times the math 
   expressions will be on the right side of the assignment operator when filling variables with values e.g.

   totalSales = localSales + internationalSales - salesReturns; (answer is stored in totalSales after expression is 
   computed)

   **If you want to subtract a negative value, INSERT SPACE b/w the minus signs like below

        newValue = oldValue - - negativeNo;
    
    Math expressions can also go into printf() statements  >>> printf("In 3 years, I will be %d\n", age + 3);

    Addition = +
    Multiplication = *
    Subtraction = -
    Division = /

    **If you put integers on both sides of the division operator, C computes the integer division result (different
    to regular division). If you need the remainder after integer division, use the modulus operator '%'. Three 
    division types = regular, integer and modulus division.

        regular division = float on either or both sides of division operator
        integer division = integers on both sides of division operator
        modulus division = if % operator b/w two integers >>>> (Modulus can only be used between integer data types)
    
    Order of operators table is how C handles what part of an expression to compute first. Operators are put into
    levels and if there are some on the same level, the ASSOCIATIVITY column shows which one to handle first. 
    When C has completed a level it moves down to the next one. For example:

        Level       Operator                                                        Associativity

          1         () (paranthesis), [] (array element), . (structure member ref.)    L - R

          2         - (negative sign), ++ (increment), -- (decrement), & (address-of), R - L
                    * (pointer indirection), sizeof(), ! (the not operator)                 
        
          3         * (multiplication), / (division), % (modulus)                      L - R

          4         + (addition), - (substraction)                                     L - R

          5         < (less than), <= (less than or equal to), > (greater than),       L - R
                    >= (greater than or equal to)
          
          6         == (equal to), != (not equal to)                                   L - R

          7         && (logical and)                                                   L - R

          8         || (logical or)                                                    L - R

          9         ? : (conditional operator)                                         R - L

          10        =, *=, /=, %=, +=, -= (assignment operators)                       R - L

          11        , (comma operator)                                                 L - R


    E.g. ans = 5 + 2 * 4 / 2 % 3 + 10 - 3
         ans = 5 + (2 * 4) / 2 % 3 + 10 - 3
         ans = 5 + (8 / 2) % 3 + 10 - 3
         ans = 5 + (4 % 3) + 10 - 3
         ans = (5 + 1) + 10 - 3
         ans = (6 + 10) - 3
         ans = 16 - 3
         ans = 13
  

    *Parantheses are what override the order of operations

    average1 = 1 + 2 + 3 + 4 / 5 = 6 + 4 / 5 = 6 + 0 = 6

    average2 = (1 + 2 + 3 + 4) / 5 = 10 / 5 = 2


    Assignment operator: because it associates R - L it has a good use. You can assign a value to more than one
    variable in the same expression. 
    
        a = 9; b = 9; c = 9; d = 9; e = 9; f = 9; g = 9; h = 9; i = 9;

        a = b = c = d = e = f = g = h = i = 9; >>> same as above. First assigns to i, then h, and so one (R - L)
    
    **Every C expression produces a value. 'j = 9' puts a 9 into j but it also results in a completed value of 9,
    that's available to store somehwere else if needed. */


#include <stdio.h>

int main() {

	int a;
	int b;

	a = 5 * (b = 2); /* Here values are being assigned to both a and b within a math expression that computes
                        a new value for a */

	printf("\n%d\n", a);

    printf("\n%d\n", b);


////////////////////////////////////////////////////////////////

    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    grade1 = grade3 = 88; // Multiple assignment

    grade2 = 79;

    printf("\nWhat did you get on the fourth test?\n");
    printf("If that number is an integer/whole number between 0 and 100, type it in. ");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("\nYour average grade is %.2f%c\n", averageGrade, '%');

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);

    printf("\nYour grade is %.2f points lower than the ", gradeDelta,);
    printf("top grade in the class (95%c)\n", '%');
    printf("\nYou are %.2f%c behind ", percentDiff, '%');
    printf("that grade!\n\n");


	return 0;


}

    


