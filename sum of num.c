#include <stdio.h>
// grting sum of numbers using do while loop
int main()
{
    int n, sum = 0;
    printf("Enter a 0 to get result of sum\n");
    do
    {
        // printf("Enter a number to get sum: "); use this line or use secound line and look diffrence
        printf("Enter a number %d: ", sum);

        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("Sum is = %d", sum);

    return 0;
}
