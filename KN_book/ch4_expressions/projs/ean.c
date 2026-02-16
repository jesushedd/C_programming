/*Computes  a  UEuropean Article Number check diigte (codigo de barras) */
/**/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1;
    int n2, n3, n4, n5, n6;
    int n7, n8, n9, n10, n11, n12;

    printf("Enter the first 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,
                                                &n2, &n3, &n4, &n5, &n6,
                                                &n7, &n8, &n9, &n10, &n11, &n12);

    /*printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    printf("Etner second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);*/

    int first_sum = n2 + n4 + n6 + n8 + n10 + n12;
    int second_sum = n1 + n3 + n5 + n7 + n9 + n11;
    int total = 3 * first_sum + second_sum;

    int check_digit = 9 - ((total - 1) % 10);
    //int bad = (10 -(total % 10)) % 10;

    printf("Check Digit: %2.3d\n", check_digit);
    //printf("Check Digit: %2.3d\n", bad);

    return 0;
}
