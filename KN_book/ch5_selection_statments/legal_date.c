#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int day, month, year;
    
    //Enter Date
    printf("Enter date (mm/dd/yy) : ");
    scanf("%2d/%2d/%2d", &month, &day, &year);
    //printf("%d/%d/%d", month, day, year);
    //print  DATD this
    printf("Dated this %d", day);
    //print propper suffix
    switch (day){
        default: printf("th");
                break;
        case 1: printf("st");
                break;
        case 2: printf("nd");
                break;
        case 3: printf("rd");
                break;
    }
    //print month name
    printf(" day of ");
    switch (month) {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("June");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default: printf("Invalid Month");
                break;
    }
    //print year
    printf(", %d.\n", year + 2000 );
    return 0;
}
