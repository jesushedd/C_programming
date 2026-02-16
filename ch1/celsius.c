/*Converts a Fah temp to Celsius*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(int argc, char const *argv[])
{
    float fah, celsius;
    
    printf("Enter fah temperature: ");
    scanf("%f", &fah);

    celsius = (fah - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);
    int hola1 = 1;
    return 0;
}
