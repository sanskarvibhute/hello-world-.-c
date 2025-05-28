// Q21.Write a function that finds the maximum and minimum of three numbers using call by reference

#include <stdio.h>

void findMaxMin(int a, int b, int c, int *max, int *min) {
    // Find maximum
    if (a > b && a > c)
        *max = a;
    else if (b > c)
        *max = b;
    else
        *max = c;

    // Find minimum
    if (a < b && a < c)
        *min = a;
    else if (b < c)
        *min = b;
    else
        *min = c;
}

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findMaxMin(a, b, c, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
