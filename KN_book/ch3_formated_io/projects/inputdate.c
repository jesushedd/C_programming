#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month, day, year;

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d/%.2d/%.2d", year, month, day);
    return 0;
}
