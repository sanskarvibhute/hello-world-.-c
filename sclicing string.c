#include <stdio.h>
#include <string.h>

char *sclice(char str[], int a, int b)
{
    int i = 0, count;
    char *ptr1 = &str[a];
    char *ptr2 = &str[b];

    str = ptr1;
    str[b] = '\0';
    return str;
}

int main()
{
    int n;

    printf("Enter the string length: ");
    scanf("%d", &n);

    // Clear the leftover Enter key
    getchar();

    // Create array with extra space for the ending zero
    char str[n + 1];

    printf("Enter your text: ");

    // Read up to n characters
    fgets(str, n + 1, stdin);

    // Remove the Enter key from the end if it's there
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    if (str[i] == '\n')
        str[i] = '\0';

    printf("You entered: %s\n", str);

    printf("Enter the starting index for sclicing : ");
    int a;
    scanf("%d", &a);

    printf("Enter the ending index sclicing: ");
    int b;
    scanf("%d", &b);

    printf("The sliced string is: %s\n", sclice(str, a, b));

    return 0;
}