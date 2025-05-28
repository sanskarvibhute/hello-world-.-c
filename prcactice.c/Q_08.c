// 8.	Write a program to reverse the number using loop.

#include <stdio.h>

int main(){
    int num, reversed = 0, reminder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        reminder = num %10;
        reversed = reversed * 10 + reminder;
        num /= 10;
    }
    printf("Reversed number = %d", reversed);
    return 0;
}