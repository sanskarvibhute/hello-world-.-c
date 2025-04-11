#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3 +1;
   
    printf("Choose 1 for Snake, 2 for water and 3 for Gun \n");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);

    if (player == 1 && computer == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win! congrats\n");
    }
    else if (player == 1 && computer == 3)
    {
        printf("You Lose the match! better luck next time\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose the match! better luck next time\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 2 && computer == 3)
    {
        printf("You win! congrats\n");
    }
    else if (player == 3 && computer == 1)
    {
        printf("You win!\n");
    }
    else if (player == 3 && computer == 2)
    {
        printf("You Lose the match! better luck next time\n");
    }
    else if (player == 3 && computer == 3)
    {
        printf("Its a Draw!\n");
    }
    else{
        printf("Something went wrong!");
    }

    return 0;
}