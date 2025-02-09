// created by lecture 27 Hrry from CodeWithHarry 
#include <stdio.h>
int main()
{
    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);
    // arr--; // this line will throw an error (incompatible type) (as it is a position stores the address of the first element of the array)

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}

// In the above example we have used p+I instead of &a[i] because they both mean the same.
// That’s how we can do Pointers Arithmetic and can use Arrays and Pointers in C Language.

// We can also use Pointers to Pointers in C Language.
// We can also use Pointers to Functions in C Language.
// We can also use Pointers to Structures in C Language.
// We can also use Pointers to Strings in C Language.
// We can also use Pointers to Arrays in C Language.
// We can also use Pointers to Union in C Language.
// We can also use Pointers to Void in C Language.
// We can also use Pointers to Linked List in C Language.
// We can also use Pointers to Memory Allocation in C Language.
// We can also use Pointers to Dynamic Memory Allocation in C Language.
// We can also use Pointers to File Handling in C Language.
// We can also use Pointers to Command Line Arguments in C Language.
// We can also use Pointers to Preprocessor Directives in C Language.
// We can also use Pointers to Bitwise Operators in C Language.
// We can also use Pointers to Typedef in C Language.


#include<stdio.h>

 /* Arrays and Pointers */
 
 int main()
 {
     int i,a[5],*p;
     p=&a[0];             // We can also write &a or a
     for (i=0;i<=4;i++)
     {
         scanf("%d",p+i);  // This will take input in Array
     }
     for (i=0;i<=4;i++)
     {
         printf("%d",*(p+i));  // This will print Array's values
     }
     return 0;
 }
