#include <stdio.h>
int main()
{
    int i, j, count, count1;
    printf("enter the number of elements you want to enter ROW's in an array\n");
    scanf("%d", &count);

    printf("enter the number of elements you want to enter COLUMN's in an array\n");
    scanf("%d", &count1);

    int marks[100][100];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            printf("enter the value of %d,%d element of an array \n", i, j);
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

    // Printing the transposed matrix
    for (int j = 0; j < count1; j++)
    {
        for (int i = 0; i < count; i++)
        {
            printf("The value of element [%d,%d] in the transposed array is %d\n", j, i, marks[i][j]);
        }
    }

    return 0;
}

// another way to do it is ...

#include <stdio.h>

int main() {
    int i, j, count, count1;

    // Input number of rows
    printf("Enter the number of rows in the array: ");
    scanf("%d", &count);

    // Input number of columns
    printf("Enter the number of columns in the array: ");
    scanf("%d", &count1);

    // Declare a 2D array with dynamic size
    int marks[count][count1];

    // Input elements into the array
    printf("Please enter the elements of the array:\n");
    for (i = 0; i < count; i++) {
        for (j = 0; j < count1; j++) {
            printf("Enter the value of element [%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
            
            // Print the entered value immediately
            printf("The entered value of element [%d][%d] is %d\n", i, j, marks[i][j]);
        }
    }

    // Print original matrix
    printf("\nThe entered values in the array are:\n");
    for (i = 0; i < count; i++) {
        for (j = 0; j < count1; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\nThe transposed matrix is:\n");
    for (j = 0; j < count1; j++) {
        for (i = 0; i < count; i++) {
            printf("%d ", marks[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

