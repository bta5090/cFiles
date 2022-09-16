/* Brook Azene */

// Examples of different escape sequence types
#include <stdio.h> 

int main() {

    printf("Column A\tColumn B\tColumn C"); /* \t = causes output to appear moved over a few spaces */
    
    printf("\nI'm practicing escape sequences \n"); /* \n = moves down the blinking cursor to the next line when 
                                                            when printing lines of text as output in terminal. Can
                                                            be at the end of a string or the beginning of the next
                                                            one. */

    printf("I am going to deletb\be one character\n"); /* \b = moves cursor back a line i.e. deletes */

    printf("I will also make a noise like this: \a!\n"); /* \a = rings computer's bell */

    printf("Michael said \"I don't know the symbol \\\"\n"); /* \" = comes out as double quote mark in output text
                                                              \\ = comes out as a backslash in output text */

    return 0;
}