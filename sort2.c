// Brook Azene
// How to combine searching and sorting techniques in a program

// ! This code would not change whether the dataset was large or small

//  Program is a combination of previous customer ID program and the bubble sort. The customer IDs are sorted then the user is asked for customer ID input to match against the sorted array. If a match is found the user is told of their balance and whether it is above or below the $100 level. If the ID is not in the array, the program terminates early. 
#include <stdio.h>


int main() {


    int ctr, idSearch, found = 0;   //  Count, input key and flag variables

    //  Initialised parallel arrays for customer ID and customer balances
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};

    int tempID, inner, outer, didSwap;   //  temp, loop, and flag variables
    float tempBal; 

    //  Arrays sorted by customer ID (balance array will still be unsorted)
    for (outer = 0 ; outer < 9 ; outer++) 
    {
        didSwap = 0;    //  Becomes 1 (True) if array not fully sorted

        for (inner = outer ; inner < 10 ; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner]; //  Temp variables needed for each array to store the elements
                tempBal = custBal[inner];

                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1;
            }
        }

        if (didSwap == 0)
        {
            break;
        }
    }


    //  Searching block of program. User is asked for key to compare against in customer ID array
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

        if (custID[ctr] > idSearch)
        {
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


    return 0;

}