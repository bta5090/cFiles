// Brook Azene
// How arrays can be used to hold a list of different data types and values like characters, strings and integers.


/*  Array - array is just a list of values with a name, and the values that make up the array are called elements.
        * An array can only hold elements that are of the same type i.e. an array can't have a floating-point value with a character value and an integer value.

                  An array of characters is just a list of characters with a name
                  An array of integers is just a list of integers with a name
                  An array of floating-points is just a list of floating-points with a name


        * Instead of each value having a name, all elements are referred to by the array name and their respective subscript. The variables are differentiated by their numeric subscript. The first array element has a subscript of 0, and goes up with each additional element in the array e.g. a an array of 5 elements would have respective subscripts of 0-4.
    

        - If an array isn't initialised, C won't do it either. This means it's not clear what is in the array.
                ! BUT if at least one value is initialised at array definition, most C compilers will zero out the rest of the elements of the array.


        * Arrays are defined similar to non-array variables, but non-array variables only need the data type at definition while the array needs the addition of brackets with the name to specify the max. number of elements the array can hold:

                    Non-array variable                          Array
                    int i;                                      int i[25];



        ! To make an array, it must be defined as one of the various data types e.g. integer, including the definition also specifying the max. number of elements that it can hold. Defining arrays is very important because that's when the amount of elements they hold is decided. If too small, the array won't be able to handle big inputs and with larger arrays a lot of memory space is taken up that the program and other variables can't use. Trying to add more elements to a full array will result in data from other variables next to that array in memory being overwritten. The only exception to not specifying the number of elements if initial values were assigned to the array at definition.

                E.g.
                        int ages[5] = {5, 27, 65, 40, 92};
                        
                        int ages[] = {5, 27, 65, 40, 92};
                        ! Don't use an array until it's initialised with values i.e. just because you define a variable doesn't mean it is initially empty or 0 when no values were assigned.

                

        * Arrays can be initialised one at a time at definition by enclosing the array's elements in braces {} and using the assignment (=) operator:

                E.g.    
                        int vals[5] = {10, 40, 70, 90, 120};

                        float money[10] = {6.23, 2.45, 8.01, 2.97, 6.41};
                        
                        double annualSal[6] = {43565.78, 75674.23, 90001.34, 
                                                10923.45, 39845.82};
                                                * C is free-form so the initialisation list can continue over a newline
        

        ! Character arrays can also be initialised with a string:

                char name[6] = "Italy";               
                        
                        ! Character arrays still require a null zero
                        * Null zeroes only terminate strings in character arrays


        * Character arrays can also be initialised with individual characters. There is no null zero at the end of the array so the first array consists of individual characters, NOT a string. The null zero as the last character is what would have treated the array as a string although time-lengthy, shown in the second example below:
                
                E.g.
                      1)  char grades[5] = {'A', 'B', 'C', 'D', 'E'};
                                ! This is an array of individual characters but to make it a string, insert '\0' as the last element.

                      2)  char italCity[7] = {'V', 'E', 'R', 'O', 'N', 'A', '\0'}; == char italCity[7] = "Verona"; 
                                * When initialising like this, the null zero is automatically added at the end because the initialisation is of a string literal and not a list inside braces like the first example. Using double quotes with a string literal would make C measure the string and accomodate space at the end for the null zero. 
            

        ! If sizeof() is used on an array, it won't return the number of elements it holds. It returns the number of bytes reserved for the array. Different data types take up different amounts of memory. E.g. Floating-points take up 4 bytes so a floating-point array of 8 elements uses 32 bytes of memory and that's the value the function returns.


        * Zero-ing an array
                - To zero out an array after definition, a for loop is used to iterate over each element
                - To zero out every element of an array at DEFINITION, a built-in shortcut is used:
                ! THIS SHORTCUT ONLY WORKS AT DEFINITION, NOT AFTER

                        E.g.
                                float amount[100] = {0.0};


        ! To go through every array element to initialise, change or print elements, use a for loop 


        - For a character array of individual characters, there is no null zero at the end of the array. Instead the last element is a character. Although not confirmed, using puts(), gets() and string conversion codes (%s) to retrieve and print would have caused many errors due to how null zero and the buffer of the aforementioned functions work.


        * The issue of defining and initialising arrays is that the values they will carry are not always known. They can come from files, calculations or user input. Character arrays are easy to fill with generated/retrieved values using strcpy() function. Other array types that hold integers, floats etc. can only fill elements one at a time (manually or efficient use of iterating for loop). 

                E.g.

                        int ages[3];
                        for (i = 0 ; i < 3 ; i++)
                        {
                                printf("What is the age of child #%d?". i + 1);
                                scanf(" %d", &ages[i]);
                        }


*/




// Program keeps track of points scored by each player in 10 basketball games. The first 6 scores are entered when the array is initialised and the user is prompted to for the scores of the last 4 games. Once all the user input is collected, program loops through scores in the array to compute average points per game.
#include <stdio.h>

int main() {

        int gameScores[10] = {12, 5, 21, 15, 32, 10};   
        // First makes array that can holds 10 elements and initialised with 6.
        int totalPoints = 0;    // Counter to store sum of all 10 game scores and find the average
        int i;  // Increment variable in for loop iterations.
        float avg; // Stores average of all game scores

        // Only need to fill in last 4 scores so only elements 6-9 are covered in loop. 
        for (i = 6 ; i < 10 ; i++) 
        {
                // 1 is added to increment variable because array elements have subscripts 0-9 but there is no game 0, only game 1 to game 10.
                printf("\nWhat did the player score in game %d?\n", i + 1);
                scanf(" %d", &gameScores[i]);
                // ! This scanf() is expecting an integer input because of the conversion character used. Entering floats would skip the rest of the iterations of the loop and cause the average game score to be wrong. Integers are expected because basketball points are awarded in whole points. 
        }

        // Loop through completed list and add each element to the variable
        for (i = 0; i < 10 ; i++) 
        {
                totalPoints += gameScores[i];
        }

        // Average is likely to not be whole number so float variable is used by typecasting on an int variable
        avg = ((float)totalPoints / 10);

        printf("\nThe player's scoring average is %.1f\n", avg);

        return 0;

}
