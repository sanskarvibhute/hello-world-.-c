#include <stdio.h>

int main()
{
    int choice;

    printf("Enter your pointer (1-10): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected option for your pointer  1.\n");
        break;
    case 2:
        printf("You selected option for your pointer 2.\n");
        break;
    case 3:
        printf("You selected option for your pointer 3.\n");
        break;
    case 4:
        printf("You selected option for your pointer 4.\n");
        break;
    case 5:
        printf("You selected option for your pointer 5.\n");
        break;
    case 6:
        printf("You selected option for your pointer 6.\n");
        break;
    case 7:
        printf("You selected option for your pointer 7.\n");
        break;
    case 8:
        printf("You selected option for your pointer 8.\n");
        break;
    case 9:
        printf("You selected option for your pointer 9.\n");
        break;
    case 10:
        printf("You selected option for your pointer 10.\n");
        break;
    default:
        printf("Invalid choice! Please enter a number between 1 and 3.\n");
        break;
    }

    return 0;
}