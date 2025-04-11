#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //generation of random number & gussing it game 
    srand(time(0));
    int random_number = rand() % 100 + 1; // in generates any random number any length then then get teminder of 100 & add 1 to it for number should between 1 to 100
    int gussed_number = 0;
    int no_of_gusses =0;
    printf("Welcome to the gussing game\n");
    printf("Enter the number between 1 to 100\n");

    do{
       
        scanf("%d", &gussed_number);

        if (gussed_number < 1 || gussed_number > 100)
        {
            printf("\nPlease enter a number between 1 to 100\n");
            continue; // Skip the rest of the loop and ask for input again
        }
        else if (gussed_number > random_number)
        {
            printf("\nYour gussed number is greter than random number please enter lower one\n");
        }
        else if (gussed_number < random_number)
        {
            printf("\nYour gussed number is less than random number please enter higher one\n");
            
        }
        else
        {
            printf("\nCongratulations you have gussed the correct number\n");
            printf("The random numder is %d\n", random_number);
        }
        no_of_gusses++;
   
    }while (gussed_number != random_number);
    
    printf("\nYou have gussed the number in %d attempts\n", no_of_gusses);
    
    
    return 0;
}