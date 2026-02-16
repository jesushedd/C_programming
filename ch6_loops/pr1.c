#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n, largest;

    for (int i = 0; n > 0 ; i = 1)
    {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (i == 0)
        {
            largest = n;
            continue;
        }

        if (n > largest)
        {
            largest = n;
        }
    }
    
    //pedir unput al usuario hasta input < = 0
    //compara con el largest y determinar si es largest

    printf("The largest number entered was %.2f\n", largest);
    return 0;
}
