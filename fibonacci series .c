#include <stdio.h>
int main()
{
    int t1 = 0;
    int t2 = 1;
    int next_term = t1 + t2;
    int n;
    printf("Please enter the number upto which you want to find the fibbonacci series.\n");
    scanf("%d", &n);
    printf("The fiboonacci series are %d,%d", t1, t2);
    for (int i = 3; i <= n; i++)
    {
        printf(",%d", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    return 0;
}

// Fibonacci series in Recursion:

#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int a;
    printf("Please enter the number upto which you want to find the fibonacci series\n");
    scanf("%d", &a);
    printf("the fibonnaci series upto %d is \n", a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}

#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; // 1 for iteration 1
        a = b - a; // 1 for iteration 1
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
