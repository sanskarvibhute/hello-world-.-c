// Q22.Write a single function that calculates both the sum and the average of marks obtained in five subjects by a student using call by reference

#include <stdio.h>

void calculateSumAndAverage(int marks[], int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < 5; i++) {
        *sum += marks[i];
    }
    *average = (float)(*sum) / 5;
}

int main() {
    int marks[5];
    int sum;
    float avg;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    calculateSumAndAverage(marks, &sum, &avg);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
