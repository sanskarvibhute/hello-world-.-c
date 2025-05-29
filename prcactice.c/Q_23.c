// Write program to get sum of digonal element of a matrix

#include <stdio.h>
int main(){
    int a[3][3], sum = 0;
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                sum = sum + a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}