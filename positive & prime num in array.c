#include <stdio.h>
#include <math.h>

int count(int a[], int num)
{
    int no_of_positive = 0;
    for (int i = 0; i < num; i++)
    {
        if (a[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int prime(int a[], int num)
{
    int no_of_prime = 0;
    for (int i = 0; i < num; i++)
    {
        if (a[i] > 1)
        {
            int flag = 1;
            for (int j = 2; j <= sqrt(a[i]); j++)
            {
                if (a[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                no_of_prime++;
            }
        }
    }
    return no_of_prime;
}

int main()
{
    int num;
    printf("Enter the no. of elements of the array\n");
    scanf("%d", &num);
    int a[num]; // Declare the array after knowing its size

    for (int i = 0; i < num; i++)
    {
        printf("Enter the value of %d element of an array\n", (i + 1));
        scanf("%d", &a[i]);
    }

    printf("The no of positive integers is %d\n", count(a, num));
    printf("The no of prime integers is %d", prime(a, num));

    return 0;
}