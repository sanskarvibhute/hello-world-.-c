#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows you want in the multiplication table: \n");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns you want in the multiplication table: \n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}