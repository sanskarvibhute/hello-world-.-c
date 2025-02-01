#include <stdio.h>
// entering numbers from starting index to respective number using do while loop
int main()
{
    int num, i;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("starting indexing from\n");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i + 1);
        i = i + 1; // i++
    } while (i < num);

    return 0;
}