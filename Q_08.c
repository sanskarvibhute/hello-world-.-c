// Q8.Write a program to Input age and nationality from user and display according. If age < 18 → not eligible, If 18–25 → First-time voter, If above 25 → Regular voter, If not Indian → not eligible

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int age;
    char nationality[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    // Convert nationality to lowercase for case-insensitive comparison
    for (int i = 0; nationality[i]; i++) {
        nationality[i] = tolower(nationality[i]);
    }

    if (strcmp(nationality, "indian") != 0) {
        printf("Not eligible\n");
    } else if (age < 18) {
        printf("Not eligible\n");
    } else if (age <= 25) {
        printf("First-time voter\n");
    } else {
        printf("Regular voter\n");
    }

    return 0;
}
