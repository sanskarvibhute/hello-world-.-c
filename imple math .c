#include <stdio.h>
int main()
{
    int a, b;
    // GETING INPUT FROM USRER & DO MATHEMATICAL OPERATIONS
    printf("Enter the value of a and b\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a+b=%d\n", a + b);
    printf("a-b=%d\n", a - b);
    printf("a/b=%d\n", a / b);
    printf("a*b=%d\n", a * b);
    return 0;
}