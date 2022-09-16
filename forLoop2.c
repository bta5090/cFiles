// Brook Azene
// This program uses all the methods of for loops implementation learnt until now. Program asks for number of movies the user has watched in the current year. It also prompts for the name of each movie and their corresponding rating from 1 to 10. It then tells the user what movie was ranked as the favourite and the least favourite. 



#include <stdio.h>
#include <string.h>

int main() 
{
    // One edge case that might create an error is a single movie name with character length greater than 40
    int count, numMovies, rating, favRating, badRating;
    char movieName[40], favourite[40], leastFavourite[40];
    // Initialises favRating to zero and badRating to 10 so that any movie with 1 or higher becomes the new favourite movie and the badRating to 10 so any movie rated 9 or lower will replace it.
    // It's a baseline to compare against each movie's ratings. Means that the first inputted movie will both be favourite and least favourite which makes sense if only one movie was watched. 
    favRating = 0;
    badRating = 10;


    do
    {
        printf("\nHow many movies have you seen this year?\n");
        scanf(" %d", &numMovies);
        // In case user enters negative input or zero and loop repeats
        if (numMovies < 1) 
        {
            printf("\nNo movies?! I don't believe you!\n\nTry again!\n");
        }
    } while (numMovies < 1);


    for (count = 1; count <= numMovies; count++)
    {
        printf("\nWhat was the name of the movie? (The title has to be one word only!)\n");
        scanf(" %s", movieName);
        // Program only saves one movie for each ranking. So movies with the same rating will result in only one movie at that rating.
        printf("\nOn a scale of 1-10 what would you rate it? \n");
        scanf(" %d", &rating);
        // Checks whether it's user's best-rated movie so far       
        if (rating > favRating) 
        {
            strcpy(favourite, movieName);
            favRating = rating;
        }
        // Checks whether it's user's worst-rated movie so far
        if (rating < badRating)
        {
            strcpy(leastFavourite, movieName);
            badRating = rating;
        }
    }

    printf("\nYour favourite movie was %s.\n", favourite);
    printf("\nYour least favourite movie was %s.\n\n", leastFavourite);

    return 0;
    
}