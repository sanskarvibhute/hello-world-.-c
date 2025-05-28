// Q 10. Write an to read the marks of n subjects for m students, calculate the average marks for each student, and display the details of students whose average marks are below 40

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of students: ");
    scanf("%d", &m);
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    float marks[m][n];
    float avg[m];

    // Reading marks and calculating averages
    for (int i = 0; i < m; i++) {
        float sum = 0;
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
            sum += marks[i][j];
        }
        avg[i] = sum / n;
    }

    // Display students with average below 40
    printf("\nStudents with average marks below 40:\n");
    int found = 0;
    for (int i = 0; i < m; i++) {
        if (avg[i] < 40) {
            printf("Student %d - Average: %.2f\n", i + 1, avg[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("None\n");
    }

    return 0;
}
