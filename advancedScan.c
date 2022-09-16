// Brook Azene
/* This is going to be a more complex of the first scanf() program I made and will call on variables that users
   have assigned values to */


// This program asks users for some basic data and prints it on screen
#include <stdio.h>

int main() {

    char topping[25];
    int slices;
    int day, month, year; // Three int variables defined 
    float cost;


    printf("\nHow much does a pizza cost in your area? ");
    printf("(Enter as $XX.XX)\n");
    scanf(" $%f", &cost);  

    printf("\nWhat is your favourite one-word pizza topping?\n");
    scanf(" %s", topping);    

    printf("\nHow many slices of %s pizza ", topping);
    printf("can you eat in one sitting\n"); 
    scanf(" %d", &slices);

    printf("\nWhat is today's date? (Enter it in XX/XX/XX format)\n");
    scanf(" %d/%d/%d", &day, &month, &year);      


    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d and have %d slices of %s pizza!\n", 
        day, month, year, slices, topping);
    printf("\nIt will only cost you $%.2f!\n\n", cost);

    return (0);
}