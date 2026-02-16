#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    float x;
    scanf("%d%f%d", &i, &x, &j);
    // for input: 10.3 5 6 
    printf("%d, %f, %d", i,x,j);
    // prints 10 0.3000 5 ; ignores 6

    return 0;
}
