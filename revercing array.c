#include <stdio.h>

void arrayPrint(int arr[], int numlen)
{
    for (int i = 0; i < numlen; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}

void arrayRev(int arr[], int numlen)
{
    int temp;

    for (int i = 0; i < numlen / 2; i++)
    {
        // swap item arr[i] with arr[numlen-1-i]
        temp = arr[i];
        arr[i] = arr[numlen - 1 - i];
        arr[numlen - 1 - i] = temp;
    }
}

int main()
{
    int numlen;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &numlen);
    int arr[numlen];
    for (int j = 0; j < numlen; j++)
    {
        printf("enter the value of %d element of an array \n", j);
        scanf("%d", &arr[j]);
    }

    printf("Before reversing the array\n");
    arrayPrint(arr, numlen);
    arrayRev(arr, numlen);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr, numlen);

    return 0;
}
