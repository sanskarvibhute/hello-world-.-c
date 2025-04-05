#include <stdio.h>
int main()
{
    int i, j, count, count1;
    printf("enter the number of elements you want to enter ROW's in an array\n");
    scanf("%d", &count);

    printf("enter the number of elements you want to enter COLUMN's in an array\n");
    scanf("%d", &count1);

    int marks[count][count1];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            printf("enter the value of %d , %d element of an array \n", i , j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            printf("the entered the value of %d,%d element of an array is %d \n", i, j, marks[i][j]);
        }
    }
}
