// Brook Azene
// How fputs() and fgets() can be used instead of puts() and gets() to print and retrieve strings without newlines for every function call as well as accounting for the buffer issues that gets() has.


/*  
    fputs() 
        - unlike puts(), does not make a newline for every printed string. This is why a getchar() is necessary to collect the Enter keystroke the user presses to advance to a newline. The format of the function is:

         !    (this function is integer type)           fputs(const char *string, File *stream) 
         

        * str − This is an array containing the null-terminated sequence of characters to be written.

        * stream − This is the pointer to a FILE object that identifies the stream where the string is to be written. When printing to standard output i.e. screen etc. the file name is replaced with 'stdout'



    fgets() 
        - unlike gets(), does not have to worry about the buffer compiler warnings. A successful read will return a string while an error will return a Null pointer. This is because you can specify the a limit to the input that is retrieved, for cases where the inheriting character array is too small for large input. The format of the function is:

         !         fgets(const char *string, int n, File *stream) 

        - 

        * str − This is an array that will be the destination for the retrieved null-terminated sequence of characters to be provided through user input.

        * n - number of characters to copy to the string from input

        * stream − This is the pointer to a FILE object that identifies the stream where the string is to be retrieved from. When reading from standard input i.e. keyboard etc. the file name is replaced with 'stdin' 
        
        */


// Second part of program is version where a file is created to which fputs() prints to when the compiler executes
#include <stdio.h>

int main()
{
    fputs("Geeksfor", stdout);  //  Here the stream is just stdout because we're printing to screen and not files
    fputs("Geeks", stdout);
 
    getchar();




//    FILE *fp;

//    fp = fopen("file.txt", "w+");

//    fputs("This is c programming.", fp);
//    fputs("This is a system programming language.", fp);

//    fclose(fp);


    return 0;
    
}