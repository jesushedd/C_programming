#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[])
{
    float radius = 10.0f;

    printf("The volume of the sphere of radius %.2f is %.2f.\n", radius, 4.0f/3.0f * PI * radius *radius * radius);

    return 0;
}
