#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to enter in an array\n");
    scanf("%d", &n);

    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);  
    }
    for (int i = 0; i < n; i++)  
    {
        printf("your Entered value of marks for student id %d: ", i + 1);
        printf("is at memory location = %d:", (void*)&marks[i]);  
        //here is %p is more suitable than %d for memory location but for more readibility we use %d
        printf("\t\t is = %d:", marks[i]);  
        printf("\n");
    }
    return 0;
}

// THIS CAN ALSO DONE WITH MEMORY ALLOCATION METHOD
//method 1 by using   malloc 
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int n:
    printf("Enter the number of elements you want to enter in an array\n");
    scanf("%d", &n);

    int *marks = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("your Entered value of marks for student id %d: ", i + 1);
        printf("is at memory location = %d:", (void *)&marks[i]);
        //here is %p is more suitable than %d for memory location but for more readibility we use %d
        printf("\t\t is = %d:", marks[i]);
        printf("\n");
    }

    return 0;
}    

// method 2 by  calloc
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n:
    printf("enter no.of marks enter in array\n");
    scanf("%d", &d);

    int * marks = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++ )
    {   
        printf("mark of student at id %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("your entered value for student id %d: ", i+1);
        printf("is at memory location = %p:", (void*)&marks[i]);
        printf("\t\tis = %d:", marks[i]);
        printf("\n")
        }
    return 0;
}

//method 3 by reallock
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int n;
    printf("Enter the number of element you want to enter in an array\n");
    scanf("%d", &n);

    int *marks = (int *)realloc(NULL, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of marks student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("your enterd value of marks for student id %d: ", i + 1);
        printf("is at memory location = %d:", (void *)&marks[i]);
        printf("\t\t is = %d:", marks[i]);
        printf("\n");
    }
    printf("\n\n");
    marks = realloc(marks, 2*n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("your enterd value of marks for student id %d: ", i+1);
        printf("is at memory location = %d:", (void *)&marks[i]);
        printf("\t\t is = %d:", marks[i]);
        printf("\n");
    }
    return 0;
}
    
//by using pointer 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int count;
    printf("Enter the number of elements you want to enter in an array\n");
    scanf("%d", &count);
    

    int marks[count];
    int *ptr = marks; // Pointer to the beginning of the array also written as int *ptr = &marks[0];
    
    // Input loop
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter the value of marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Output loop
    for (size_t i = 0; i < count; i++)
    {
        printf("your Entered value of marks for student id %d: ", i + 1);
        printf("is at memory Location = %p:", (void *)&marks[i]);
        printf("\t\t is = %d:", marks[i]);
        printf("\n");
    }
    
    return 0;
}


