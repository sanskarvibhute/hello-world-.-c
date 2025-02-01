#include <stdio.h>
// this program is written for swapping 2 numbers using c programming
int main()
{
    int a, b, c;
    printf("enter two numbers a & b respectively: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("after swapping numbers with there respected values are interchange \n");
    printf("a=%d,\tb=%d", a, b);
    return 0;
}