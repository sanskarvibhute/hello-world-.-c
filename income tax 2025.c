#include <stdio.h>
// income tax applied in INDIA for economic year 2025
int main()
{
    int income, tax = 0;
    printf("Enter income: \n");
    scanf("%d", &income);

    if (income <= 1200000)
    {
        tax = 0;
    }
    else if (income > 1200000 && income <= 1600000)
    {
        tax = 0.15 * (income - 1200000);
    }
    else if (income > 1600000 && income <= 2000000)
    {
        tax = 0.15 * (1600000 - 1200000) + 0.2 * (income - 1600000);
    }
    else if (income > 2000000 && income <= 2400000)
    {
        tax = 0.15 * (1600000 - 1200000) + 0.2 * (2000000 - 1600000) + 0.25 * (income - 2000000);
    }
    else
    {
        tax = 0.15 * (1600000 - 1200000) + 0.2 * (2000000 - 1600000) + 0.25 * (income - 2000000) + 0.3 * (income - 2400000);
    }

    printf("The total tax you need to pay is %d", tax);
    printf("\n Your net income after tax deduction is %d", income - tax);
    return 0;
}