// Q7. Develop an program to calculate the sum of all odd numbers between 1 and n.

/* #include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("Sum of all odd numbers between 1 and %d is %d", n, sum);
    return 0;
}  */  

#include <stdio.h>

int main(){
    int n, min, sum;
    printf("Enter the value of n number of odd terms: ");
    scanf("%d", &n);

    min = (n+1)/2;
    sum = n*n;
    printf("Sum of all odd numbers between 1 & %d odd terms is %d", n, sum);
    return 0;
}