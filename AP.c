#include <stdio.h>
int main()
{
    float n, a, d, sum;
    printf("Enter the first term of the series: ");
    scanf("%f", &a);

    printf("Enter the common difference of the series: ");
    scanf("%f", &d);

    printf("Enter the number of terms in the series: ");
    scanf("%f", &n);

    printf("The %fth term of the series is %f\n", n, a + (n - 1) * d);

    printf("The terms of the arithmetic progression are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f\t ", a + i * d);
    }

    sum = n / 2 * (2 * a + (n - 1) * d);
    printf("\nThe sum of the first %f terms of the series is %f\n", n, sum);

    return 0;
}