#include <stdio.h>
#include <stdbool.h>


// This code checks if a given string is a palindrome. It reads a string from the user, calculates its length, and then compares characters from the start and end of the string moving towards the center. If all corresponding characters match, it concludes that the string is a palindrome.

int main() {
    char str[100];
    int i, len = 0;
    bool isPalindrome = true;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[len] != '\0') {
        len++;
    }
    len--; // Exclude the newline character

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}



/* #include <stdio.h>
#include <stdbool.h>

// This code checks if a given string is a palindrome. It reads a string from the user, calculates its length, and then compares characters from the start and end of the string moving towards the center. If all corresponding characters match, it concludes that the string is a palindrome.

int main()
{
    char str[100];
    int i, len = 0;
    bool isPalindrome = true;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[len] != '\0')
    {
        len++;
    }
    len--; // Exclude the newline character

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>

bool is_pelindrome(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{ // geting array size from user
    int size;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size of array \n");
        return 1;
    }

    int arr[size];
    // getting array element from user
    printf("Enter %d integers:\n", size);
    for (size_t i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (is_pelindrome(arr, size))
    {
        printf("the array is pelindrome\n");
    }
    else
    {
        printf("the array is not pelindrome\n");
    }

    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>

bool is_pelindrome(int arr[], int size)
{
     // Empty array or single element array is always a palindrome
     if (size <= 1) {
        return true;
    }

    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{ // geting array size from user
    int size;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size of array \n");
        return 1;
    }

    int arr[size];
    // getting array element from user
    printf("Enter %d integers:\n", size);
    for (size_t i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (is_pelindrome(arr, size))
    {
        printf("the array is pelindrome\n");
    }
    else
    {
        printf("the array is not pelindrome\n");
    }

    return 0;
} */

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // It's a palindrome
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Read input string

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}