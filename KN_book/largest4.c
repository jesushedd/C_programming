#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int max = n4;
    int min = n1;
    if (n2 > max)
    {
        min = max;
        max = n2;
    }if (n3 > max)
    {
        min = max;
        max = n3;
    }
    if (n4 > max)
    {
        min = max;
        max = n4;
    }

    printf("Largest: %d\n", max );
    printf("Smallest: %d\n", min);

    
    
    
    return 0;
}
