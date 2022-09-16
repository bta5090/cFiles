// Brook Azene
// Using conditional operators to compile code efficiently and run faster commands.


    /* A conditional statement is the only operator in C which needs three arguments. It's basically a shorter if/else block. 
        The format is:
        
                (relation) ? (trueStatement) : (falseStatement);        ****The semi-colon is not part of it
        
        The relation is any relational test e.g. age > 5 and the test can be combined with logical operators. Both the trueStatement and falseStatement can be any valid C statement e.g. age *= 1.5. The parentheses are for clarity sake (not mandatory)                An example is:
        
                (age <= 100) ? (age *= 1.05) : (age *= 1.50);
        
        So if the relational test is true, the trueStatement executes and if false the falseStatement executes. This is the same as the block below:
        
                if (age <= 100.0) {
                    age *= 1.05;
                }
                else {
                    age *= 1.50;
                } 
        
        Almost any if/else statement can be written as a conditional statement and needs less typing, and runs efficiently. Even then, the example above of the conditional operator is seen as redundant by programmers i.e. age is being assigned a value both times so it's better to take the variable out of the conditional operator's statements like this:
        
                age *= ( age <= 100.0) ? (1.05) : (1.50); 
        
        Don't replace all if/else statements with a conditional operator because if/else is sometimes more clearer and conditonal statements can be to complex to fit into the operator in some uses. If it's just a single if/else block then conditional operator is a better alternative. The conditional operator can also can also be used in places if/else can't go:
        
                int numPear; (takes in input)
                printf("I ate %d pear%s\n", numPear, (numPear > 1) ? ("s.") : ("."));
        
        If numPear is greater than one then the trueStatement is printed and vice versa*/




// Program uses conditional operator to ask user for an integer b/w 1-100 and test whether input is divisible by all integers between 2 and 9.
#include <stdio.h>

int main() {
        
        int numPick; // When you only define/declare a variable without initialising, it stores 'junk' = random data with same type as variable, and every time program is executed that data is replaced with similar junk.
        
        printf("\nHello, please pick a whole number between 1 and 100.\n");
        scanf(" %d", &numPick);
        
        if ((numPick >= 1) && (numPick <= 100)) {

                printf("\n%d %s divisible by 2\n", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 3\n", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 4\n", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 5\n", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 6\n", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 7\n", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 8\n", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
                printf("\n%d %s divisible by 9\n\n", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));
        }
        else {
                printf("\nYou didn't follow the instructions, please run the game and try again\n");
        }

        return 0;
}