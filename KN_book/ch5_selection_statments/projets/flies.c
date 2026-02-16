#include <stdio.h>

#define _1ST (8 * 60)
#define _2ND (9 * 60 + 43)
#define _3TH (11 * 60 + 19)
#define _4TH (12 * 60 + 47)
#define _5TH (14 * 60)
#define _6TH (15 * 60 + 45)
#define _7TH (19 * 60)
#define _8TH (21 * 60 + 45)

int main(int argc, char const *argv[])
{
    
    int in_hour, in_min, in_minutes;

    printf("Enter input time 24-hour HH:MM : ");
    scanf("%2d:%2d", &in_hour, &in_min);
    in_minutes = in_hour * 60 + in_min;



    
    int actual_dept;

    int diff, diff1, diff2, diff3, diff4,
        diff5, diff6, diff7, diff8;

        diff = in_minutes - _1ST;
        diff1 = diff > 0 ? diff : -diff;

        diff = in_minutes - _2ND;
        diff2 = diff > 0 ? diff : -diff;

        diff = in_minutes - _3TH;
        diff3 = diff > 0 ? diff : -diff;

        diff = in_minutes - _4TH;
        diff4 = diff > 0 ? diff : -diff;

        diff = in_minutes - _5TH;
        diff5 = diff > 0 ? diff : -diff;

        diff = in_minutes - _6TH;
        diff6 = diff > 0 ? diff : -diff;

        diff = in_minutes - _7TH;
        diff7 = diff > 0 ? diff : -diff;

        diff = in_minutes - _8TH;
        diff8 = diff > 0 ? diff : -diff;




    int min_diff = diff1;
    actual_dept = _1ST;
    if (diff2 < min_diff)
    {
        min_diff = diff2;
        actual_dept = _2ND;
    }
    if (diff3 < min_diff)
    {
        min_diff = diff3;
        actual_dept = _3TH;
    }
    if (diff4 < min_diff)
    {
        min_diff = diff4;
        actual_dept = _4TH;

    }
    if (diff5 < min_diff)
    {
        min_diff = diff5;
        actual_dept = _4TH;
    }
    if (diff6 < min_diff)
    {
        min_diff = diff6;
        actual_dept = _6TH;
    }
    if (diff7 < min_diff)
    {
        min_diff = diff7;
        actual_dept = _7TH;
    }
    if (diff8 < min_diff)
    {
        min_diff = diff8;
        actual_dept = _8TH;
    }
    
    
    int actual_hour = (actual_dept / 60) % 12;
    int actual_mins = actual_dept % 60;
    actual_hour = (actual_hour == 0) ? 12 : actual_hour;

    
    
    
    
    printf("Closest departure time is %.2d:%.2d %s,", actual_hour, actual_mins, (actual_dept / 60) > 11 ? "p.m." : "a.m." );
    switch (actual_dept)
    {
    case _1ST:
        printf("arriving at 3:00 p.m.\n");
        break;
    case _2ND:
        printf("arriving at 11:52 a.m.\n");
        break;
    case _3TH:
        printf("arriving at 1:31 p.m.\n");
        break;
    case _4TH:
        printf("arriving at 3:00 p.m.\n");
        break;
    case _5TH:
        printf("arriving at 4:08 p.m.\n");
        break;
    case _6TH:
        printf("arriving at 5:55 p.m.\n");
        break;
    case _7TH:
        printf("arriving at 9:20 p.m.\n");
        break;
    case _8TH:
        printf("arriving at 11:58 p.m.\n");
        break;
    }
    return 0;
}
