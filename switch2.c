// Brook Azene
// How to apply switch statements using two levels of menus (one nested within another).


// This program presents an initial menu of three different decades to the user then after input, presents a second menu listing different topics for the user to choose from. After the second input, the program prints a list of key information from that specific decade in that specific topic. 
#include <stdio.h>
#include <stdlib.h>

int main() {

    int choice1;
    int choice2;


    printf("\nWhat do you want to see?\n");
    printf("1. 1980's\n");
    printf("2. 1990's \n");
    printf("3. 2000's\n");
    printf("4. Quit\n");

    do {
    
        printf("\nWhat is your choice: ");
        scanf(" %d", &choice1);

        switch (choice1) {

        //  The reason that if-else statements are used instead of another switch statement is because nesting switch statements can lead to default choices to overlap which can confuse the compiler and prevent the program running. 

            case (1) : 
            {
                printf("\nWhat do you want to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies \n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("\nWhat is your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1) 
                {
                    printf("\nWorld Series Champions in 1980's:\n");
                    printf("1980: Philadelphia Phillies\n");
                    printf("1981: Los Angeles Dodgers\n");
                    printf("1982: St. Louis Cardinals\n");
                    printf("1983: Baltimore Orioles\n");
                    printf("1984: Detroit Tigers\n");
                    printf("1985: Kansas City Royals\n");
                    printf("1986: New York Mets\n");
                    printf("1987: Minnesota Twins\n");
                    printf("1988: Los Angeles Dodgers\n");
                    printf("1989: Oakland A's\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2) 
                {
                    printf("\nOscar-Winning Movies in 1980's:\n");
                    printf("1980: Ordinary People\n");
                    printf("1981: Chariots of Fire\n");
                    printf("1982: Gandhi\n");
                    printf("1983: Terms of Endearment\n");
                    printf("1984: Amadeus\n1985: Out of Africa\n");
                    printf("1986: Platoon\n");
                    printf("1987: The Last Emperor\n");
                    printf("1988: Rain Man\n");
                    printf("1989: Driving Miss Daisy\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3) 
                {
                    printf("\nUS Presidents in 1980's:\n");
                    printf("1980: Jimmy Carter\n");
                    printf("1981-1988: Ronald Reagan\n");
                    printf("1989: George H.W Bush\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4) 
                {
                    printf("\n");
                    exit(1);
                }
                else 
                {
                    printf("\nYour choice is not an available option.\n");
                    break;
                }
            }




            case (2) : 
            {
                printf("\nWhat do you want to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies \n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("\nWhat is your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1) 
                {
                    printf("\nWorld Series Champions in 1990's:\n");
                    printf("1990: Cincinnati Reds\n");
                    printf("1991: Minnesota Twins\n");
                    printf("1992: Toronto Blue Jays\n");
                    printf("1993: Toronto Blue Jays\n");
                    printf("1994: No World Series\n");
                    printf("1995: Atlanta Braves\n");
                    printf("1996: New York Yankees\n");
                    printf("1997: Florida Marlins\n");
                    printf("1998: New York Yankees\n");
                    printf("1999: New York Yankees\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2) 
                {
                    printf("\nOscar-Winning Movies in 1990's:\n");
                    printf("1990: Dances with Wolves\n");
                    printf("1991: Silence of the Lambs\n");
                    printf("1992: Unforgiven\n");
                    printf("1993: Schindler's List\n");
                    printf("1996: The English Patient\n");
                    printf("1997: Titanic\n");
                    printf("1998: Shakespeare in Love\n");
                    printf("1999: American Beauty\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3) 
                {
                    printf("\nUS Presidents in 1990's:\n");
                    printf("1990-1992: George H.W Bush\n");
                    printf("1993-1999: Bill Clinton\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4) 
                {
                    printf("\n");
                    exit(1);
                }
                else 
                {
                    printf("\nYour choice is not an available option.\n");
                    break;
                }
            }




            case (3) : 
            {
                printf("\nWhat do you want to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies \n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("\nWhat is your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1) 
                {
                    printf("\nWorld Series Champions in 2000's:\n");
                    printf("2000: New York Yankees\n");
                    printf("2001: Arizona Diamondbacks\n");
                    printf("2002: Anaheim Angels\n");
                    printf("2003: Florida Marlins\n");
                    printf("2004: Boston Red Sox\n");
                    printf("2005: Chicago White Sox\n");
                    printf("2006: St. Louis Cardinals\n");
                    printf("2007: Boston Red Sox\n");
                    printf("2008: Philadelphia Phillies\n");
                    printf("2009: New York Yankees\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2) 
                {
                    printf("\nOscar-Winning Movies in 2000's:\n");
                    printf("2000: Gladiator\n");
                    printf("2001: A Beautiful Mind\n");
                    printf("2002: Chicago\n");
                    printf("2003: Lord of the Rings: The Return of the King\n");
                    printf("2004: Million Dollary Baby\n2005: Crash\n");
                    printf("2006: Departed\n");
                    printf("2007: No Country for Old Men\n");
                    printf("2008: Slumdog Millionaire\n");
                    printf("2009: The Hurt Locker\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3) 
                {
                    printf("\nUS Presidents in 2000's:\n");
                    printf("2000: Bill Clinton\n");
                    printf("2001-2008: George W. Bush\n");
                    printf("2009: Barack Obama\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4) 
                {
                    printf("\n");
                    exit(1);
                }
                else 
                {
                    printf("\nYour choice is not an available option.\n");
                    break;
                }
            }



            case (4) : 
            {
                printf("\n");
                exit(1);
            }

            
            default : 
            {
                printf("\n%d is not a valid choice.", choice1);
                printf("Please try again\n\n");
                break;
            }

        }

    } while ((choice1 < 1) || (choice1 > 4));

    return 0;

}