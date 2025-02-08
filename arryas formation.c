#include <stdio.h>
int main()
{
    int i, count;
    printf("enter the number of elements you want to enter in an array\n");
    scanf("%d", &count);
    int marks[count];

    for (int i = 0; i < count; i++)
    {
        printf("enter the value of %d element of an array \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("the entered the value of %d element of an array is %d \n", i, marks[i]);
    }

    return 0;
}