/* #include <stdio.h>

int main()
{
    int x = 5;
    int *a = &x;

    printf("%x\n", &x);
    printf("%x\n", a);

    printf("%d\n", &x);
    printf("%d", a);

    return 0;
} */

/* #include <stdio.h>
int main()
{
    printf("lets know about pointers \n");
    int a =75;
    int *ptra = &a;
    printf("the pointer to adress a is %x\n", &ptra);
    printf("the adress of a is %x\n", &a);
    printf ("the adress of ptra is %d\n", ptra);
    printf("the value of a is %d\n", *ptra);
    printf("the value of a is %d\n", a);
    return 0;}
 */

#include <stdio.h> //type of pointer for integer (4 byte)
int main()
{
    int a;
    printf("enter value of a as integer\n");
    scanf("%d", &a);
    int *ptra = &a;

    printf("the value of a is stored at %d\n", ptra); // we can use %x also & %p also for adressinsted of %d

    ptra++;
    printf("the value of a is stored at %d\n", ptra);
    printf("the value of a is stored at %d\n", ptra - 2);

    return 0;
}

#include <stdio.h> //type of pointer for charactor (byte = 1 byte)
int main()
{
    char a;
    printf("enter value of a as charactor \n");
    scanf("%d", &a);
    char *ptra = &a;

    printf("the value of a is stored at %d\n", ptra); // we can use format spacifier %x also & %p also for adressinsted of %d

    ptra++;
    printf("the value of a is stored at %d\n", ptra);
    printf("the value of a is stored at %d\n", ptra - 2);

    return 0;
}

#include <stdio.h> //type of pointer for flaot(4 byte)
int main()
{
    float a;
    printf("enter value of a as float \n");
    scanf("%d", &a);
    float *ptra = &a;

    printf("the value of a is stored at %d\n", ptra); // we can use format specifier %x also & %p also for adressinsted of %d

    ptra++;
    printf("the value of a is stored at %d\n", ptra);
    printf("the value of a is stored at %d\n", ptra - 2);

    return 0;
}

#include <stdio.h> //type of pointer for double(8 byte)

int main()
{
    double a;
    printf("enter value of a as double \n");
    scanf("%d", &a);
    double *ptra = &a;

    printf("the value of a is stored at %d\n", ptra); // we can use format spacefier %x also & %p also for adressinsted of %d

    ptra++;
    printf("the value of a is stored at %d\n", ptra);
    printf("the value of a is stored at %d\n", ptra - 2);

    return 0;
}
