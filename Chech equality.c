include <stdio.h>

int main() {
    int a, b, c;
    
    printf("enter three no's: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("%d is the largest", a);
    }
    else if (b > a && b > c) {
        printf("%d is the largest", b);
    }
    else if (c > a && c > b) {
        printf("%d is the largest", c);
    }
    else if (c==b && c==a) {
        printf("all are equal");
        }
    else {
        printf("enter valid inputs");
    }
    
    return 0;
}
