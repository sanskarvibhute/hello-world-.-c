#include <stdio.h>     // WITH ARGUMENT AND WITH RETURN VALUE
int sum(int a, int b); // declearation of function

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, sum(a, b));
    return 0;
} // main function or call to function
int sum(int a, int b)
{
    return a + b;
} // defination of function

#include <stdio.h>    //WITH argument AND WITHOUT return value
void printstar(int n) // declearation of function
{
    for (int i = 0; i < n; i++)
    {
        printf("\t*"); // or also can use printf("%c" , '*');
    }
    printf("\n");
} // defination of function
int main()
{
    int n;
    printf("Enter the number of stars you want to print: \n");
    scanf("%d", &n);
    printstar(n);
    return 0;
} // function call

#include <stdio.h> //WITHOUT argument AND WITH return value
int takenumber()   // declearation of function
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    return n;
} // defining the function
int main()
{
    int a = takenumber();
    printf("The number entered is %d", a);
    return 0;
} // function call


#include <stdio.h> //WITHOUT argument AND WITHOUT rturn value
void greet() // declaration of function
{
    printf("Hello, World!\n");
} // definition of function

int main()
{
    greet(); // function call
    return 0;
}