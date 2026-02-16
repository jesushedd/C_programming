# include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k;
    i = j = 7;
    printf("%d",   (i - j) < 0 ? -1 : !!(i - j)); 

    i = 1, j = 7;
    printf("%d", (i - j) < 0 ? -1 : !!(i - j));


    i = 7, j = 3;
    printf("%d", (i - j) < 0 ? -1 : !!(i - j));  
}
