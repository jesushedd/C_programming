#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int hour12, hour24, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour24, &mins);

    hour12 = hour24 % 12;

    printf("Equivalent 12-hour time: %.2d:%d %s", hour12 == 0 ? 12 : hour12, mins, hour24 > 11 ? "PM" : "AM");
    return 0;
}