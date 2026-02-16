#include <stdio.h>
// sames as proj 4
int main(int argc, char const *argv[])
{
    
    int a,b,c;
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);

    printf("The reversal is: %d%d%d", c, b, a);
    return 0;
}
