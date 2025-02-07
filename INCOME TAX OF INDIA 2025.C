#include <stdio.h>

int calculateTax(int income) {
    int tax = 0;
    
    // No tax for income up to 12 lakhs
    if (income <= 1200000) {
        return 0;
    }
    
    // 15% tax for 12-16 lakhs
    if (income > 1200000) {
        tax += (income < 1600000 ? income - 1200000 : 400000) * 15 / 100;
    }
    
    // 20% tax for 16-20 lakhs
    if (income > 1600000) {
        tax += (income < 2000000 ? income - 1600000 : 400000) * 20 / 100;
    }
    
    // 25% tax for 20-24 lakhs
    if (income > 2000000) {
        tax += (income < 2400000 ? income - 2000000 : 400000) * 25 / 100;
    }
    
    // 30% tax for income above 24 lakhs
    if (income > 2400000) {
        tax += (income - 2400000) * 30 / 100;
    }
    
    return tax;
}

int main() {
    int income;
    
    printf("Enter your annual income (in Rs.): ");
    
    // Input validation
    if (scanf("%d", &income) != 1 || income < 0) {
        printf("Error: Please enter a valid income amount\n");
        return 1;
    }
    
    int tax = calculateTax(income);
    int netIncome = income - tax;
    
    printf("\n=== Income Tax Calculation (FY 2025) ===\n");
    printf("Gross Income: Rs. %d\n", income);
    printf("Income Tax: Rs. %d\n", tax);
    printf("Net Income: Rs. %d\n", netIncome);
    
    return 0;}
