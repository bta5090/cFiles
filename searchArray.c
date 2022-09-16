// Brook Azene
// How different techniques are used to fill and search arrays for values.


/*  A program can use several ways to fill an array. Some arrays are known in advance, i.e. the data they will hold
    is clear so for the day counts in each month of the year, the array would need to hold 12 elements of integer datatypes. This means you can initialise these arrays with said values at definition, or even at assignment statements.

    * Parallel arrays = arrays that are in sync because they each hold data that correspond to each other i.e. a customer ID in element 11 of the first array is the balance holder of the value found in element 11 of the second array. Most times parallel arrays would have the same number of element?

    Another way to enter values into an array is through user input e.g. customer order program for Amazon shippers. Data can also be inputted from disk (storage) files, files that stores heaps of important data that can be imported instead of inputted by the user every program compilation. 

    * Three methods used in combination to fill arrays:

            - Assignment
            - User input
            - Disk files            >> Disk files are slightly more complex than programs used to process input and 
                                       assignment for arrays. So arrays will be filled with assignment and user data in this book to keep it simple. 
    
    ! The most basic search that is done is one that goes from the beginning of the array to the end until a match is either found or not. This is called a sequential search.


    * Values can be found in arrays using a 'key'. The key is the value that the user enters. Most searches will be done on parallel arrays and one of those arrays will be the key array. It will hold all the values for which you'll search for. If the search finds the value, other arrays supply needed data and the results can be printed. 
        
        ! There is also a chance that the search fails to find the value and this needs to also be printed.

*/ 




// Two programs are working here. The first program will use two parallel arrays, one maintaining a list of 10 customers and the second holding their respective balances. Both arrays are initialised at definition. An ID number is taken from user input and then checked against the customer array to find a match and if found, the flag variable is set to True and checks the balance array to see if they are under or over their limit and prints a response. A response is printed if there is no ID match. The second program is an extension of the previous basketball scores tally. Three linked arrays are used to hold points scored, rebounds and assists. The game with the highest score is searched and its respective rebounds and assists for that game are all printed.
#include <stdio.h>

int main() {

    // ! The logic for this program is not affected by how big the data set is, it will work.
    int ctr;    //  Loop counter
    int idSearch;   // Key = stored user input = value that is searched for against customer ID list 
    int found = 0;  //  Flag variable i.e. True/False

    //  Two parallel arrays defined and initialised with 10 elements
    // ! Obviously for this to work the ID and balances have to be in the same order
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};

    // Prompt user input
    printf("\n      WELCOME TO CUSTOMER BALANCE LOOK-UP \n");
    printf("\nWhat customer number do you want to check? ");
    scanf(" %d", &idSearch);

    // Check if ID exists in first array
    for (ctr = 0 ; ctr < 10 ; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1;  //  Set to True if ID found
            break;
        }
    }

    //  If True, will check if balance is over or under limit and print response 
    if (found)
    {
        if (custBal[ctr] > 100.00)
        {
            float diff = custBal[ctr] - 100.00;
            printf("\nCustomer %d's balance is $%.2f, $%.2f over the limit. You cannot spend anymore money.\n\n", custID[ctr], custBal[ctr], diff);
        }
        else
        {
            printf("\nCustomer %d's balance is $%.2f so you have money to spend!\n\n", custID[ctr], custBal[ctr]);
        }
    }
    //  If ID not found then response printed
    else
    {
        printf("\nID #%d does not match any ID stored on file.\n", idSearch);
    }




//////////////////////////////////////////////////////////////////////////////////




    int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
    int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
    int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
    
    int bestGame = 0;   //  Comparison variable for best scoring game
    int gmMark = 0; //  Flag variable = marks the current best scoring game
    int i;

    //  Loop compares each game to current best total, and if current score is higher, it's assigned as the new best and the counter varable becomes the new flag variable.
    for ( i = 0 ; i < 10 ; i++) 
    {
        if (gameScores[i] > bestGame)
        {
            bestGame = gameScores[i];
            gmMark = i;
        }
    }

    printf("\nGame #%d was the player's best game\n", gmMark + 1);  //  Add 1 to array subscript for real game no.
    printf("\nScored %d points\n", gameScores[gmMark]);
    printf("\n %d rebounds\n", gameRebounds[gmMark]);
    printf("\n %d assists\n\n", gameAssists[gmMark]);
    // ! Cleaner to write as one big print statement


    return 0;

}