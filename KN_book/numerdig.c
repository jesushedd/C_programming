#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int dig_number = 0;
    if (n > 999)
    {
        dig_number = 4;
    }
    else if (n < 1000 && n > 99)
    {
        dig_number = 3;
    }
    else if (n < 100 && n > 9)
    {
        dig_number = 2;
    }
    else if (n < 10 && n > 0)
    {
        dig_number = 1;
    }

    printf("The number %d has %d digits\n", n, dig_number);
    

    
    return 0;
}
