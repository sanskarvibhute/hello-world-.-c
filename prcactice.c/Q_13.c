//Q13.Write a program to find the smallest element in a 1D array

#include<stdio.h>

int main(){
    int i,n,smallest;
    printf("enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array :\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    for(i = 0; i < n; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
    printf("The smallest number of array is %d ",smallest);
    return 0;
}
