// Brook Azene
// The order of logical operators can be hard to read without parantheses to help people understand the code and the priority of each operator. There are certain styles to how to write conditions using logical operators. 

// *** C doesn't need parantheses to tell the correct priority but for people reading the code it is needed. It is just a good programming habit.


// This is a test program on how to structure logical operators well
#include <stdio.h>

int main() {

    // Random variables
    int age = 21; 
    int height = 184;
    char name[20] = "September";
    int sales = 12;
    int coolFactor = 9;
    int grade = 95;
    int classMissed = 1;
    int sports = 5;
    int numActs = 3;

    if (((age >= sizeof(name)) && (coolFactor > 5)) && (sales < height) || (50 == age)) {

        printf("\nCondition 1 Correct!\n");
    }
    else {

        printf("\nSomething is wrong in 1.\n");
    }
    
    // This is a statement without any of the parantheses like the one above
    if (age >= sizeof(name) && coolFactor > 5 && sales < height || 50 == age) {

        printf("\nCondition 2 Correct!\n");
    }
    else {

        printf("\nSomething is wrong in 2.\n");
    }
    
    // This is just another way of formatting the condition for clearer reading
    if (((age >= sizeof(name)) && (coolFactor > 5)) && 
    (sales < height) || (50 == age)) {

        printf("\nCondition 3 Correct!\n");
    }
    else {

        printf("\nSomething is wrong in 3.\n");
    }
    
    // An even cleaner way of using logical operators when some conditions rely on others
    if ((grade > 93) && (classMissed <= 3)) {

        if ((numActs >= 3) || (sports >= 2)) {

            printf("\nCondition 4 Correct!\n");
        }
    }
    else {

        printf("\nSomething is wrong in 4.\n\n");
    }

    return 0;
}