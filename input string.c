#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of characters in string:\n");
    if (scanf("%d", &num) != 1)
    {
        printf("Error reading number.\n");
        return 1;
    }

    char str[num + 1]; // +1 for the null terminator

    for (int i = 0; i < num; i++)
    {
        printf("Enter the character: ");
        scanf(" %c", &str[i]); // Space before %c to consume whitespace
    }

    str[num] = '\0'; // Correctly terminate the string

    printf("%s\n", str);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100]; // Declare a string of up to 99 characters + null terminator

    printf("Enter a word: ");
    scanf("%99s", str); // Limit input to prevent buffer overflow

    printf("You entered: %s\n", str);

    return 0;
}

#include <stdio.h>
#include <string.h> // Include string.h for strcspn

int main()
{
    char str[100]; // Declare a string of up to 99 characters + null terminator

    printf("Enter a sentence: ");

    // Check if fgets was successful
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        fprintf(stderr, "Error reading input.\n");
        return 1; // Return an error code
    }

    // Remove the newline character if needed
    str[strcspn(str, "\n")] = 0;

    printf("You entered: %s\n", str);

    return 0;
}