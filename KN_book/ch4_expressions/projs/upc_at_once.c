/*Computes  a  Universal Product Code check diigte (codigo de barras) */
/*0 13800 15173*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int first_digit;
    int f1, f2, f3, f4, f5;
    int s1, s2, s3, s4, s5;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first_digit,
                                                &f1, &f2, &f3, &f4, &f5,
                                                &s1, &s2, &s3, &s4, &s5);

    /*printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    printf("Etner second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);*/

    int first_sum = first_digit + f2 + f4 + s1 + s3 + s5;
    int second_sum = f1 + f3 + f5 + s2 + s4;
    int total = 3 * first_sum + second_sum;

    int check_digit = 9 - ((total - 1) % 10);
    //int bad = (10 -(total % 10)) % 10;

    printf("Check Digit: %2.3d\n", check_digit);
    //printf("Check Digit: %2.3d\n", bad);

    return 0;
}
