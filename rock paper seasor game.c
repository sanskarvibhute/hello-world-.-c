#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //generate random number 
    int computer = rand() % 3 + 1;

    int player = 0;
    printf("Welcome to the Rock, Paper, Scissors game!\n");
    printf("Enter 1 for Rock, 2 for Paper, and 3 for Scissors:\n");
    scanf("%d", &player);

    printf("Computer chose: %d\n", computer);
    printf("You chose: %d\n", player);

    if (player < 1 || player > 3)
    {
        printf("Invalid choice! Please enter a number between 1 and 3.\n");
        return 1; // Exit the program if the input is invalid
    }
    
    
    else if (player == computer)
    {
        printf("It's a tie!\n");
    }
    else if (player == 1 && computer == 3)       
    {
        printf("Rock crushes Scissors! You win!\n");
    }
    else if (player == 2 && computer == 1)
    { 
        printf("Paper covers Rock! You win!\n");
    }
    else if (player == 3 && computer == 2)
    {
        printf("Scissors cut Paper! You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
    
    return 0;
}