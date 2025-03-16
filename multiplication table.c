// multiplication table that you want
#include <stdio.h>
int main()
{
    int Nu;
    scanf("%d", &Nu);
    printf("your multiplication table is = \n %d", Nu);
    printf("\n %d", Nu * 2);
    printf("\n %d", Nu * 3);
    printf("\n %d", Nu * 4);
    printf("\n %d", Nu * 5);
    printf("\n %d", Nu * 6);
    printf("\n %d", Nu * 7);
    printf("\n %d", Nu * 8);
    printf("\n %d", Nu * 9);
    printf("\n %d", Nu * 10);
    return 0;
}
//multiplication tabel using array 
#include <stdio.h>
int main()
{
    int n;
    int m;

    printf("Enter the number for which you want to get the multiplication table of: ");
    scanf("%d", &m);

    printf("Enter the number of times which multiplication table you wish to print: ");
    scanf("%d", &n);

    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = m * (i + 1);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", m, i + 1, arr[i]);
    }

    return 0;
}

// multiplication table using for loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows you want in the multiplication table: \n");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns you want in the multiplication table: \n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// MULTIPLICATION TABLE USING FILE I/O
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    int num;
    printf("Enter the number you want the table of: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d X %d = %d\n", num, i, num * i);
    }
    fclose(fptr);
    return 0;
}
