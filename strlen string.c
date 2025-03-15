#include <stdio.h>
int strlen(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[] = {"h""a""r" "r" "y" "\0"};
    printf("%d", strlen(str));

    return 0;
}

//or

#include <stdio.h>

int strlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    // Correct way to initialize a string
    char str[] = "This contentis learned from harry bhai";

    printf("%d", strlen(str));

    return 0;
}