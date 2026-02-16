#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    //enter speed

    int speed;
    printf("Enter wind speed: ");
    scanf("%d", &speed);

    if (speed < 1)
    {
        printf("Calm\n");
    }
    else if (speed <= 3)
    {
        printf("Light air\n");
    }
    else if (speed <= 27)
    {
        printf("Breeze");
    }
    else if (speed <= 47)
    {
        printf("Gale");
    }
    
    
    
    
    //display description
    return 0;
}
