#include <stdio.h>

int main()
{
    int year, month, starting_day, day_in_week, day_in_month;
    // taking input of year & month from user
    printf("Enter the year:");
    scanf("%d", &year);
    printf("Enter the month 1-12;");
    scanf("%d", &month);

    // days in month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        day_in_month = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        day_in_month = 30;
    }
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            day_in_month = 29;
        }
        else
        {
            day_in_month = 28;
        }
    }
    else
    {
        printf("Invalid month\n");
        return -1;
    }

    // calculating the starting date of month
    starting_day = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    for (int i = 1; i < month; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            starting_day += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            starting_day += 30;
        }
        else if (i == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                starting_day += 29;
            }
            else
            {
                starting_day += 28;
            }
        }
    }
    day_in_week = (starting_day + 1) % 7; // Incrementing the starting day by 1

    // Display the calendar
    printf("\n==============================\n");
    printf("       %d-%02d\n", year, month);
    printf("==============================\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // printing the space before starting day of month
    for (int i = 0; i < day_in_week; i++)
    {
        printf("    ");
    }

    for (int DAY = 0; DAY < day_in_month; DAY++)
    {
        printf("%4d", DAY + 1);
        if ((DAY + day_in_week + 1) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n==============================\n");
    printf("Total days in year %d month %d is %d\n", year, month, day_in_month);
    printf("==============================\n");

    return 0;
}