#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 21)
    {
        printf("You are adult!");
    }
    else if (age >= 18)
    {
        printf("You are between 21 to 18 then you are thinkable young ");
    }
    else if (age >= 14)
    {
        printf("You are between 14 to 18 then you are tin ager");
    }
    else if (age >= 3)
    {
        printf("You are between 3 to 14 and you are child");
    }
    else
    {
        printf("you are BABY");
    }
    return 0;
}