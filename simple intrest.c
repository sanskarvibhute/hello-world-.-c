// calculating simple interest
#include <stdio.h>
int main()
{
    // I= intrest P=principle R=rate T= time
    float I;
    float P;
    float R;
    float T;
    scanf("%f", &P);
    scanf("%f", &R);
    scanf("%f", &T);
    I= P * T * R ;
    printf("intrest=%f", I );

    return 0;
}