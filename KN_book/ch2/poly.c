#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 0;

    printf("Enter x: ");
    scanf("%f", &x);

    float poly = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("%.4f\n", poly);
    return 0;
}
