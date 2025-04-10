#include <stdio.h>
int main()
{
    // initializing the board with 0
    int board[101] = {0};

    // addition of ladders in board (positive values mean going up)
    board[4] = 21;
    board[13] = 33;
    board[33] = 16;
    board[42] = 21;
    board[50] = 19;
    board[62] = 19;
    board[74] = 18;

    // addition of snakes in board (negative values mean going down)
    board[99] = -48;
    board[89] = -36;
    board[76] = -18;
    board[66] = -21;
    board[54] = -23;
    board[43] = -25;
    board[40] = -37;
    board[27] = -22;

    int player = 0;
    int dice;

    printf("Welcome to Snake and Ladder Game!\n");
    printf("You start at position 0. Reach position 100 to win!\n");

    while (player <= 100)
    {
        printf("\nYou are currently at position %d\n", player);
        printf("Enter the value of dice (1-6): ");

        // Get the dice value from user
        scanf("%d", &dice);
        if (dice >= 1 && dice <= 6)
        {
            printf("\nYou rolled a %d\n", dice);

            // Check if the move would exceed 100 we can't move ahed of 100
            if (player + dice <= 100)
            {
                player += dice; // Move the player
                printf("You moved to position %d\n", player);

                // Apply snake or ladder effect
                if (board[player] != 0)
                {
                    if (board[player] > 0)
                    {
                        printf("Yay! You climbed a ladder!\n");
                    }
                    else
                    {
                        printf("Oops! You got bitten by a snake!\n");
                    }

                    player += board[player];
                    printf("You are now at position %d\n", player);
                }

                // Check if player has won
                if (player == 100)
                {
                    printf("\nCongratulations! You've reached position 100!\n");
                    printf("YOU WON THE GAME!\n");
                    break;
                }
            }
            else
            {
                printf("You need exactly %d to win. Try again!\n", 100 - player);
            }
        }
        else
        {
            printf("Invalid dice value. Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}

....................................................................................................................................
------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    // generate a random number betweeen 1 & 6
    srand(time(0));

    // initializing the board with 0
    int board[101] = {0};

    // addition of ladders in board (positive values mean going up)
    board[4] = 21;
    board[13] = 33;
    board[33] = 16;
    board[42] = 21;
    board[50] = 19;
    board[62] = 19;
    board[74] = 18;

    // addition of snakes in board (negative values mean going down)
    board[99] = -48;
    board[89] = -36;
    board[76] = -18;
    board[66] = -21;
    board[54] = -23;
    board[43] = -25;
    board[40] = -37;
    board[27] = -22;

    int player = 0;

    printf("Welcome to Snake and Ladder Game!\n");
    printf("You start at position 0. Reach position 100 to win!\n");

    while (player <= 100)
    {
        printf("\nYou are currently at position %d\n", player);
        printf("Press Enter to roll the dice...\n");

        getchar(); // Wait for Enter key
        int random_number = rand() % 6 + 1;
        printf("\nYou rolled a %d\n", random_number);
        // Check if the move would exceed 100 we can't move ahed of 100
        if (player + random_number <= 100)
        {
            player += random_number;
            ; // Move the playe
            printf("You moved to position %d\n", player);

            // Apply snake or ladder effect
            if (board[player] != 0)
            {
                if (board[player] > 0)
                {
                    printf("Yay! You climbed a ladder!\n");
                }
                else
                {
                    printf("Oops! You got bitten by a snake!\n");
                }

                player += board[player];
                printf("You are now at position %d\n", player);
            }

            // Check if player has won
            if (player == 100)
            {
                printf("\nCongratulations! You've reached position 100!\n");
                printf("YOU WON THE GAME!\n");
                break;
            }
        }
        // this condition is for player not exceed 100 & if exceeds 100 then it will show
        else
        {
            printf("You need exactly %d to win. Try again!\n", 100 - player);
        }
    }

    return 0;
}
