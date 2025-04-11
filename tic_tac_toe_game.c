#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

int main()
{
    char winner = ' ';
    srand(time(0));  // Initialize random seed once at program start
    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        
        computerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        
    }

    printBoard();
    printWinner(winner);

    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x, y;
    printf("Enter row number & column number #(1-3):    ");
    scanf("%d%d", &x, &y);
    x--;
    y--;

    do
    {
        if (board[x][y] != ' ')
        {
            printf("Invalid move, try again: ");
            scanf("%d%d", &x, &y);
            x--;
            y--;
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

void computerMove()
{
    // creates random move
    int x, y;

    if(checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
    printf("Computer chose: %d %d\n", x + 1, y + 1);
}

char checkWinner()
{
    for(int i =0; i<3; i++)
    {   //check rows
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
        //check columns
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
        //check diagonals
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
        {
            return board[0][0];
        } 
        if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
        {
            return board[0][2];
        }

    }
    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("Player wins!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("Computer wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
}