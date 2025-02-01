// degree temperature convert to Fahrenheit.
#include <stdio.h>
int main()
{
    float Tc;
    // let radious of circle=r
    printf("enter degree celcious temprature");
    scanf("%f", &Tc);
    printf("fahrenheit temprature is= %f\n", (Tc * 9 / 5) + 32);

    return 0;
}