# include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k;
    i = 5; j =3;
    printf("(a) i / j = %d; i %% j = %d\n", i / j, i % j);


    i = 2; j = 3;
    printf("(b) (i + 10) %% j = %d\n", (i + 10) % j);

    i = 7; j = 8; k = 9;
    printf("(c) (i + 10) %% k / j = %d\n", (i + 10) % k / j);

    i = 1; j =2; k = 3;
    printf("(d) (i + 5) %% (j + 2) / k = %d\n",(i + 5) % (j + 2) / k );
    return 0;
}
