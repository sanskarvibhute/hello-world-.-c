
// here we are going to see and analyse the size of different data types in c programing
#include <stdio.h>

int main() {
    // Basic data types in c programing
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));
    
    // Long variations
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    
    // Short variation
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    
    return 0;
}