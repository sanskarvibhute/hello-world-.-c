#include <stdio.h>
int main()
{
    int num;
    // enter no then i will say is it less than 100 or greter than it
    scanf("%d", &num);
    if (num < 100)
    {
        printf("Number is less than 100");
    }
    else if (num == 100)
    {
        printf("Number is equalto 100");
    }
    else
    {
        printf("Number is greater than 100");
    }
    return 0;
}
