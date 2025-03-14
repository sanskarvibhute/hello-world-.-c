#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in array\n");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of an array\n", (i + 1));
        scanf("%d", &arr[i]);
    }
    
    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element of an array is %d\n", (i + 1), arr[i]);
    }
    
    // Reverse the array
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element of an array is %d\n", (i + 1), arr[i]);
    }
    
    return 0;
}