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

===========================================================================================================================================

#include <stdio.h>

int main() {
    float gross_income, taxable_income, tax = 0;
    const float STANDARD_DEDUCTION = 75000.0;
    
    printf("Enter your annual income (INR): ");
    scanf("%f", &gross_income);
    
    // Apply standard deduction
    taxable_income = gross_income - STANDARD_DEDUCTION;
    if(taxable_income < 0) taxable_income = 0;
    
    printf("\n--- Tax Analysis for ₹%.2f ---\n", gross_income);
    printf("Standard Deduction: ₹75,000.00\n");
    printf("Taxable Income: ₹%.2f\n\n", taxable_income);

    float remaining = taxable_income;
    float slab_tax;

    // Tax slab calculations
    if(remaining > 2400000) {
        slab_tax = (remaining - 2400000) * 0.30;
        tax += slab_tax;
        printf("30%% on ₹%.2f (Above 24L): ₹%.2f\n", remaining-2400000, slab_tax);
        remaining = 2400000;
    }
    
    if(remaining > 2000000) {
        slab_tax = (remaining - 2000000) * 0.25;
        tax += slab_tax;
        printf("25%% on ₹%.2f (20L-24L): ₹%.2f\n", remaining-2000000, slab_tax);
        remaining = 2000000;
    }
    
    if(remaining > 1600000) {
        slab_tax = (remaining - 1600000) * 0.20;
        tax += slab_tax;
        printf("20%% on ₹%.2f (16L-20L): ₹%.2f\n", remaining-1600000, slab_tax);
        remaining = 1600000;
    }
    
    if(remaining > 1200000) {
        slab_tax = (remaining - 1200000) * 0.15;
        tax += slab_tax;
        printf("15%% on ₹%.2f (12L-16L): ₹%.2f\n", remaining-1200000, slab_tax);
        remaining = 1200000;
    }
    
    printf("\nTotal Tax Payable: ₹%.2f", tax);
    printf("\nNet Income After Tax: ₹%.2f\n", gross_income - tax);
    
    printf("\n--- Fund Allocation ---\n");
    printf("• 20%% - Defense\n• 15%% - Infrastructure\n");
    printf("• 12%% - Healthcare\n• 10%% - Education\n");
    printf("• 43%% - Other Expenditures\n");
    
    return 0;
}
