#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    float x, y;
    //for input 12.3 45.6 789
    scanf("%f%d%f", &x, &i, &y);
    //prediction: 12.3, 45, 0.6000 ; will ignore 789
    printf("%f, %d, %f\n", x, i, y);
    //gg
    return 0;
}
