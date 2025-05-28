#include <stdio.h>
// Q 11. Write a program to find the largest element in a 1D array
int main(){
    int i,n,largest;
    printf("enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array :");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i = 0; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("The largest number of array is %d ",largest);
    return 0;
}