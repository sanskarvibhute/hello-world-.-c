// this is solution of question 8 from harry bhai c language course
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i=0;
    int length; // Renamed from 'char' to 'length'
    char *ptr;
    
    while (i<3)
    {
        printf("\nEmployee %d : Enter the number of characters in your employee id\n", i+1);
        scanf("%d", &length); // Changed variable name here
        ptr = (char *)malloc((length+1) * sizeof(char));
        printf("Enter your employee id\n");
        scanf("%s", ptr);
        printf("Employee %d : Your employee id is %s\n", i+1, ptr);
        free(ptr);
        i++;  
    }
    
    return 0;
}