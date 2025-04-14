#include <stdio.h>

int main() {
    int n, b;

    printf("Size of array you want: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &b);

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == b) {
            printf("Element exists\n");
            printf("Index is %d\n", i);
            break;
        }
    }

    if (i == n) {
        printf("Element does not exist\n");
    }

    return 0;
}
