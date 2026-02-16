#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 13.683;
    // exp, left justifed of size 8; one digit after decimal point
    printf("|%-8.1e|\n", x);
    //exp, right justified of size 10, six digits after decimal point
    printf("|%10.6e|\n", x);
    //fixed decimal left justiifed of size 8, three digits after point
    printf("|%-8.3f|\n", x);
    // fixed decimal, rifgt justified of size 6, no digist after point
    printf("|%6.0f|\n", x);
    return 0;
}
