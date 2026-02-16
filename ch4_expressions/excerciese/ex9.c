#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k;

    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);


    // b
    i =  j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);


    //c

    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);
    
    //d
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);




    return 0;
}
