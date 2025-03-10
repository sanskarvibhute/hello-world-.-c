#include <stdio.h>
#include <math.h>
int main()
{
    // nth term in GP finding and sum of n terms in GP
    float n, a, r, sum;
    printf("Enter the first term of the series: ");
    scanf("%f", &a);

    printf("Enter the common ratio of the series: ");
    scanf("%f", &r);

    printf("Enter the number of terms in the series: ");
    scanf("%f", &n);

    printf("The %fth term of the series is %f\n", n, a * pow(r, (n - 1)));

    printf("The terms of the geometric progression are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%f\t ", a * pow(r, i));
    }

    sum = a * (pow(r, n) - 1) / (r - 1);

    printf("\nThe sum of the first %f terms of the series is %f\n", n, sum);

    return 0;
}