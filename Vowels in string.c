#include <stdio.h>
#include <string.h>

int vowels(char str[], int length) { 
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U') { // Added uppercase vowels check
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    printf("Enter number of elements in string: ");
    scanf("%d", &num);

    char str[num + 1]; // Adding space for null terminator
    for (int i = 0; i < num; i++) {
        printf("Enter character at position %d: ", i);
        scanf(" %c", &str[i]); 
    }
    str[num] = '\0'; // Ensure null termination for safety

    printf("Number of vowels in the string is: %d\n", vowels(str, num));
    return 0;
}
