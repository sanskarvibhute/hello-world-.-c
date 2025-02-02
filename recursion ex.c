#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else if (n != 1 || n != 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("The factorial of %d is %d", n, factorial(n));

    return 0;
}