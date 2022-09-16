// Brook Azene
// How to sort arrays using bubble sort and search through them faster.


/*  Sorting is the ordering of lists of values. 
    
    * Useful for arrays that don't hold data in the desired order
    * Arrays are a better storage method than single variables i.e. data manipulation capability, more versatile
    
    Bubble sort is the easiest sorting technique 
        - It does this by placing values in a descending or ascending order of ranking
        ! It is not the most efficient sort. 
        - During the sort, the lower values "float" up the list each time a pass is made through the data. 
        * It is little more than a nested for-loop, the outer loop for counting the iterations through the loop and the inner doing the actual sorting by comparing two elements. Each iteration of the inner loop goes through the whole array. 
        - Always maintain sorted arrays to make searching for variables easier
        ! Dont' swap values without a temp variable 
        * Bubble sort needs the nested for-loop but other solutions to emulating bubble sort exist


    The actual swapping of the variables involves using a temp variable to store the value being swapped since premature assignment will lead to elements being lost.

    Testing for any swaps in a given iteration is possible in cases where array is already sorted, or only a few iterations are needed to order the array, a break statement can be used to exit the for loop. 

    ! To decide whether to make the order of sorting ascending or descending, only the relational operators in the if block loop needs to be changed. 
    
    * Sorting data can make searching for data faster
        - Instead of searching a whole un/sorted array, a test case can measure whether the value being searched for in a sorted array is smaller/greater, then the program would know the element did not exist. 
        - An unsorted array would mean the whole array has to be searched but in a sorted array, only a subset has to be searched for the program to know if the element exists or not. 
        ! THIS IS ONLY TRUE FOR SMALL DATASETS. Large ones mean that a lot of the array still has to be searched regardless of sorted status and thus defeating the point of saving real processing time.
        - Early search termination is also possible. This saves time for arrays with lots of elements. 
        ! Having sorted arrays is not always efficient because the whole array would have to sort for every operation from the user e.g. add element, delete element, change element. 

*/





// Program will sort lists of 10 randomly-generated numbers using rand(). Using a nested for-loop as bubble sort, the outer loop will go through each element while the inner loop makes a comparison between the current element and the next one. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //  For time data type


int main() {

    int ctr, inner, outer, didSwap, temp;   //  Count, loop and flag variables
    int nums[10];   //  Array to hold numbers
    time_t t;   //   Time variable to generate random functions using rand()


    srand(time(&t));    //  Every generation produces unique sets of random values

    // Loop fills array with 10 values from a range of 1-100
    for (ctr = 0 ; ctr < 10 ; ctr ++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }

    // Prints array before sorting
    puts("\nThis is the generated unsorted array: ");

    for (ctr = 0 ; ctr < 10 ; ctr++)
    {
        printf("%d, ", nums[ctr]);
    }


    // This is the nested loop where the bubble sort takes place
    for (outer = 0 ; outer < 9 ; outer++)   //  outer is holding the current element, hence only going to 
    {
        didSwap = 0;    //  Flag variable becomes 1 (True) if list is not fully sorted

        for (inner = outer ; inner < 10 ; outer++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }

        if (didSwap == 0)   //  Allows premature exit from sort if values in array are already sorted
        {
            break;
        }
    }

    //  Prints sorted array
    puts("\nThe generated random list is sorted: ");
    for (ctr = 0 ; ctr < 10 ; ctr++)
    {
        printf("%d, ", nums[ctr]);
    }

    return 0;

}