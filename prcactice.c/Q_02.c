// write program of do while loop & using it write program to separate number of digits in a number 

#include <stdio.h>
int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in the number are:\n");
    if (num == 0) {
        printf("0\n");
    } 
    else {
        do {
            digit = num % 10;        
            printf("%d\n", digit);   
            num = num / 10;          
        } while (num != 0);
    }

    return 0;
}