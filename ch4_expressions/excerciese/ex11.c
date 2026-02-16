#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;
    //a
    i = 1;
    printf("%d ", i++ -1);
    printf("%d\n", i);


    //c 
    i =7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);

    // d
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i,j,k);
    return 0;
}
