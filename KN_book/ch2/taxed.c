#include <stdio.h>

#define TAX_PERCENT 0.05f

int main(int argc, char const *argv[])
{
    float amount = 0;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount + amount * TAX_PERCENT);
    return 0;
}
