#include <stdio.h>
//this program is written for user's mark inputs and displaying the grade of the student
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total, avg;

    printf("Enter marks of five subjects:\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = total / 5;

    printf("Average = %d\n", avg);

    if (avg >= 90)
    {
        printf("Grade: Outstanding\n");
    }
    else if (avg >= 80)
    {
        printf("Grade: Excellent\n");
    }
    else if (avg >= 70)
    {
        printf("Grade: Good\n");
    }
    else if (avg >= 60)
    {
        printf("Grade: Average\n");
    }
    else if (avg >= 50)
    {
        printf("Grade: Poor\n");
    }
    else if (avg >= 40)
    {
        printf("Grade: Pass\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}