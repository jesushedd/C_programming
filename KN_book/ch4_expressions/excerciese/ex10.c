#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    // a
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);


    //b
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    //c
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);
    return 0;



}
