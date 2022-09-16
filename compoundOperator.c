// Brook Azene
// Using compound and typecast operators to make expressions more efficient


/* C unlike other languages has very little commands and a lot of operators. You might have to change the value
    of a variable many times, even though initially you've only assigned values using literals or expressions.

Counter variable = variable that you add/subtract 1 to when a certain event/condition takes place e.g. everytime
profit goes negative >>>  lossCount = losscount + 1. (adding 1 to lossCount and assigning that new value to 
lossCount)  

Compound operators are what enable us to update variables through incrementing, decrementing and by values > 1.
These operators reduce typing errors and means you don't have to list the variable on both sides of the assigment.
You don't need to have the variable on both sides of the assignment operator though: 

    Compound Operator                  Example                  Equivalent Statemnt
            
            *=                      total *= 1.25;              total = total * 1.25;
            
            /=                      amt /= factor;              amt = amt / factor;
            
            %=                      days %= 3;                  days = days % 3;
            
            +=  (increment)         count += 1;                 count = count + 1;
            
            -=  (decrement)         quantity -= 5;              quantity = quantity - 5;


On the order of operators table, these compound assignment operators have low precedence i.e. + >> +=, and this
can create problems when forgetting the order:

    total = 5;
    total *= 2 + 3;             The total is not 13, because even though multiplication comes before addition, 
                                COMPOUND MULTIPLICATION is done AFTER addition, so the answer is 25.

    total = total * (2 + 3);


DO NOT MIX DATA TYPES = USE TYPECASTING */



/* The first section of program will increment and decrement a counter normally, then the second half will use
    compound operators to do the same thing. */
#include <stdio.h>

int main() {

    int ctr = 0;

    ctr = ctr + 1;    // Term for ctr variable going up by one is called incrementing
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1;
    printf("Counter is at %d.\n", ctr);    // At this point ctr is decrementing by 1
    ctr = ctr - 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1;
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1;
    printf("Counter is at %d.\n", ctr);


    int sales = 100;
    sales = sales * 1.25;    // Another way to update a variable's value
    printf("Sales is now %.2d\n", sales);

/////////////////////////////////////////////////////////////



    int ctr2 = 0;

    ctr2 += 1;
    printf("Counter is at %d.\n", ctr2);
    ctr2 += 1;
    printf("Counter is at %d.\n", ctr2);


    printf("Counter is at %d.\n", ctr2 += 1); // The assignment can be slotted into printf() as an expression
    ctr2 += 1;
    printf("Counter is at %d.\n", ctr2);    
    printf("Counter is at %d.\n", ctr2 += 1);

    ctr2 -= 1;
    printf("Counter is at %d.\n", ctr2);
    printf("Counter is at %d.\n", ctr2 -= 1);
    printf("Counter is at %d.\n", ctr2 -= 1);
    printf("Counter is at %d.\n", ctr2 -= 1);
    

    return 0;
}



