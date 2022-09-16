// Brook Azene
// This is a practice program from the book testing if and else statements testing multiple conditions


/* The program asks the user about their happiness state on a scal of 1 to 10 and then gives a custom 2-line
    message based on their range, either 1-2, 3-4, 5-7, or 8-19 */

#include <stdio.h>

int main() {

    int prefer;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);


    if (prefer >= 8) {

        printf("Great for you!\n");
        printf("Things are going well for you!\n");
    }
    else if (prefer >= 5) {

        printf("Better than average, right?\n");
        printf("Maybe things will get better soon!\n"); /* else if statements let you test multiple conditions if
                                                            the first or preceding ones were false. */
    }
    else if (prefer >= 3) {

        printf("Better than average, right?\n");
        printf("Hope things turn around soon...\n");
    }
    else {

        printf("Hang in there -- things have to improve, right?\n");
        printf("Always darkest before dawn.\n");
    }

    return 0;
}