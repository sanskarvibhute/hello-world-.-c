// Write program of do while loop & usiing it write program to count number of digits in a number 

# include <stdio.h>
int main(){
    int n,digits=0;
    printf("enter a number: ");
    scanf("%d", &n);
    do{
        n=n/10;
        digits++;
    }while(n!=0);
    printf("number of digits in a number is %d", digits);
    return 0;
}