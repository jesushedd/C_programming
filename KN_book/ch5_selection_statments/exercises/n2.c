
#include <stdio.h>

int main (void){
    int i, j, k;
    i = 10; j = 5;
    printf("%d\n", !i < j);
    // 1 true

    // b)
    i = 2, j = 1;
    printf("%d\n", !!i + !j);
    // 1 int

    // c)
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);
    // 1 true

    // d)
    i = 1; j =2; k = 3;
    printf("%d\n", i < j || k);
}