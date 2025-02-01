#include <stdio.h>
// this program is for printing numbers from starting number to ending number with diffrence taken from user
int main()
{
    int num; // entaring starting number
    printf("Enter a number: ");
    scanf("%d", &num);

    int end; // entaring ending number
    printf("Enter a ending number: ");
    scanf("%d", &end);

    int diffrence; // entaring diffrence in number
    printf("Enter a diffrence in number: ");
    scanf("%d", &diffrence);

    while (num < end)
    {
        num = num + diffrence;
        printf("%d \t", num);
    }

    return 0;
}