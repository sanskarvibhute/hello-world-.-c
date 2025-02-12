#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number then I will extract each single no. from it :\n ");
    scanf("%d", &n);

    // Flag to check if it's the first digit being printed
    int first = 1;

    while (n > 0) {
        int d = n % 10;
        n = n / 10;

        if (!first) {
            printf(",");
        }
        printf("%d", d);
        first = 0;
    }
    printf("\n"); 
    return 0;
}