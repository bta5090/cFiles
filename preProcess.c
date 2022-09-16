// Brook Azene
// Using the preprocessor directives #include and #define to create/call header files and defined constants


/* A preprocessor directive starts with #. It does cause anything in runtime of program because they already were
   processed during compiling. Before compiling, the #include statement is replaced by the contents of the file
   specifed in the statement. (Recommended to place before/outside main() so that whole program knows about
   the imported header files and any defined constants).

   The filename interpretation differs on the OS but UNIX is picky so stick to the actual file name 
   
   Most if not all C programs will use #include because the printf() can only be used through a certain header
   file and #define will be useful for where a lot of functions are calling on the same constants (literals).
   
   A header file is needed to store defined constants which can be called using #include. A header file has the 
   extension ".h" in the filename.
   
   #include has two formats =  #include <filename>   OR   #include "filename" ; "<>" is for calling built-in C files
   while "" is used for header files that you have created in your own directory. The quotation marks will tell C
   to search the directory in which the program is stored THEN scan the built-in directory. This way you can make 
   files with the same name and C will scan your version first. DO NOT ALTER/TOUCH BUILT-IN FILES.

   #define defines constants. A C constant == literal (data value that doesn't change) e.g. 4, "ABC". When you
   such a constant a name it becomes a named/defined constant. THIS IS NOT A VARIABLE.

   Format = #define CONSTANTNAME constantDefinition  =  where name is the name you provide and the definition being 
   the data value like a certain number e.g. Pi = 3.145.....  >>>>>    #define MYNAME "Brook". What this tells C
   is that for everywhere that CONSTANTNAME appears in the program, replace it with constantDefinition. Defined 
   constants are good for changing values b/w program runs.    */



// This example program is going to test importing a self-made header file and using its defined constants
#include <stdio.h>
#include <string.h> 

#include "preProcess.h"


int main() {

    int year;
    char job[20] = "Software Programmer";

    printf("\nMy name is %s and I am %d and earn %d every year as a %s\n", NAME, AGE, SALARY, job);

    year = 2020;
    printf("\nIn %d I want to be a Senior %s for Google\n", year, job);

    year = 2022;
    strcpy(job, "Senior Engineer");
    printf("\nBut by %d I want to live in the %s and work as a %s because I'll be older than %d\n\n", year, 
        "Netherlands", job, AGE);
    
    return 0;


}