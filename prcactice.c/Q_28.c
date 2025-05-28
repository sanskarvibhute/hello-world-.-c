//Q28.Write the program to copy the string without strcpy() function

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the string: ");
    gets(str1);

    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s\n", str2);

    return 0;
}
/*
#include <stdio.h>s

int main() {
    char src[100], dest[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);

    // Remove newline character if present
    while (src[i] != '\0') {
        if (src[i] == '\n') {
            src[i] = '\0';
            break;
        }
        i++;
    }

    // Copying string manually
    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string

    printf("Copied string: %s\n", dest);

    return 0;
}

*/