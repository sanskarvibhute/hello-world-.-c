#include <stdio.h>
// this program is written for swapping 2 numbers using c programming
int main()
{
    int a, b, c;
    printf("enter two numbers a & b respectively: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("after swapping numbers with there respected values are interchange \n");
    printf("a=%d,\tb=%d", a, b);
    return 0;
}


// this can be also be wretten by using CALL BY REFERANCE  & using POINTERS 
#include <stdio.h>

/* function definition to swap the values */
void swap(int *x, int *y) {
    int temp;
    temp = *x;    /* save the value at address x */
    *x = *y;      /* put y into x */
    *y = temp;    /* put temp into y */
}

int main() {
    int a = 34, b = 74;
    
    printf("Before swap: %d and %d\n", a, b);
    swap(&a, &b);
    printf("After swap: %d and %d\n", a, b);
    
    return 0;
}
