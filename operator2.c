// Brook Azene
// Program asks the user for a number of tires and price per tire. Then calculates a total price, adding sales tax


#include <stdio.h>

#define SALESTAX 0.07 /* If same or changing value is used throughout program, easier to just 
                        make defined constant that can be changed if needed. */


int main() {

    int numTires;   // Variables for amount of tires bought, price, before-tax total and tax with total cost
    float tirePrice, beforeTax, netSales;

    printf("\nHow many tires did you purchase?\n"); // Prompts for how many tires bought
    scanf(" %d", &numTires);
    
    printf("\nWhat was the cost per tire? \n(Enter in XX.XX format)  $"); // Asks the price per tire
    scanf(" %f", &tirePrice);

    beforeTax = tirePrice * numTires; // Computing the price
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("\nYou spent $%.2f on your tires\n\n", netSales);

    return 0;

}