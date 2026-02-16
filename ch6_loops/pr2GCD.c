#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, gcd;
    gcd = 1;
    //ingrear numeros
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    //loop dividir los dos numeros por un numero comun hasta q uno de ellos no se divisible
   
        if (a == 0 || b == 0)
        {
            gcd = a > b ? a : b; 
        }
        else
        {

            for (int i = 2; i <= a && i <= b;)
            {
                if ((a % i == 0) && (b % i == 0))
                {
                    a /= i;
                    b /= i;
                    gcd *= i;

                }
                else i ++;  
            } 
        }   
    

    printf("Greates comon divisor: %d\n", gcd);
    
    return 0;
}
