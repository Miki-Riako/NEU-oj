#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int x;
    int y;
    int z;
}
date;

bool checkLeap(int year);

int main(void)
{
    date day;
    int days = 0;
    scanf("%d %d %d", &day.x, &day.y, &day.z);
    switch (day.y)
    {
        case 12:
        days += 30;
        case 11:
        days += 31;
        case 10:
        days += 30;
        case 9:
        days += 31;
        case 8:
        days += 31;
        case 7:
        days += 30;
        case 6:
        days += 31;
        case 5:
        days += 30;
        case 4:
        days += 31;
        case 3:
        days += 28;
        case 2:
        days += 31;
        default:
        break;
    }
    if (checkLeap(day.x))
    {
        if ((day.z == 29) && (day.y == 2))
        {
            days++;
        }
        if (day.y >= 3)
        {
            days++;
        }
    }
    days += day.z;
    printf("%d\n", days);
}

bool checkLeap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    return false;
}
