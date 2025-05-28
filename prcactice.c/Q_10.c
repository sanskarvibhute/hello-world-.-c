// 10.	Write a function to calculate the average of elements in a 1D array

#include <stdio.h>

float average(int arr[], int size){
    int i;
    float sum = 0;
    for(i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum / size;
}

int main(){
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Average = %.2f", average(arr, n));
    return 0;
}