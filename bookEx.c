// Brook Azene
// This is a practice program testing printf(), escape functions and conversion characters

#include <stdio.h>

int main() {

    printf("\nName \tNationality \tAge \tSex \tRelation \tLikability");

    printf("\n\a\n\a%s \t%s \t%d \t%c \t%s \t\t%.1f%c\n\n", "Ted", "Ethiopian", 51, 'M', "Father", 45.66, '%');

    printf("%s \t%s \t%d \t%c \t%s \t\t%.1f%c\n\n", "Dede", "Ethiopian", 46, 'F', "Mother", 70.53, '%');

    printf("%s \t%s \t%d \t%c \t%s \t\t%.1f%c\n\n", "Brook", "Ethiopian", 21, 'M', "Myself", 99.89, '%');

    printf("%s \t%s \t%d \t%c \t%s \t\t%.1f%c\n\n", "Bemn", "Ethiopian", 20, 'F', "Sister", 00.11, '%');

    return 0;
}