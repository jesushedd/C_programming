/*Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main (void)
{
    //int height, length, width, volume, weight;

    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    float weight = (volume + 165) / 166.0f;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %0.2f\n", volume);
    printf("Dimensional wight (pounds) : %f\n", weight);
    printf("Dimensional wight (pounds) : %d\n", (volume + 165) / 166);
    
    return 0;

    
}