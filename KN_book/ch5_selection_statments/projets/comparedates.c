#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int day1, month1, year1, day2, month2, year2;
    
    //promp date
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    

    //transform date into days starting in 1 january 2000
    int only_days1, only_days2;

    only_days1 = year1 * 365 + month1 * 30 + day1;
    only_days2 = year2 * 365 + month2 * 30 + day2;

    //compare dates
    if (only_days1 < only_days2)

    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (only_days2 < only_days1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);

    } else printf("They are the same date\n");
    
    
    return 0;
}
