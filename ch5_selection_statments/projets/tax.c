#include <stdio.h>

int main(int argc, char const *argv[])
{
    float income, tax_perc; 
    float fix_tax;
    float exedent, base;
    //enter tex income
    printf("Enter taxable income: ");
    scanf("%f", &income);
    // set fix tax
    //set perct tax over
    if (income > (base = 7000))
    {
        tax_perc = 6;
        fix_tax = 230;
        
    }
    else if (income > (base = 5250))
    {
        tax_perc = 5;
        fix_tax = 142.5f;
        
    }
    else if (income > (base = 3750))
    {
        tax_perc = 4;
        fix_tax = 82.5f;
    }
    else if (income > (base = 2250))
    {
        tax_perc = 3;
        fix_tax = 37.5f;

    }
    else if (income > (base = 750))
    {
        tax_perc = 2;
        fix_tax = 7.5f;
    }
    else
    {
        fix_tax = 0;
        tax_perc = 1;
        base = 0;
    }

    float total_tax = fix_tax + (tax_perc * (income - base) / 100.0f);

    printf("Tax due: %.3f\n", total_tax);
    
    

    
    
    return 0;
}
