#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int entered;
    int intermidiate;
    int i,a,b,c,d;
    i = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &entered);

    d = entered % 8;
    c = entered / 8 % 8;
    b = entered / 8 / 8 % 8 ;
    a = entered / 8 / 8 / 8 % 8;
    i = entered / 8 / 8 / 8 / 8;

    printf("In octal, your number is: %d%d%d%d%d\n", i, a,b,c,d);



    return 0;
}
