#include <stdio.h>

int main(int argc, char const *argv[])
{
    int teenager, age;
    age = 20;

    teenager = (age >= 13) && (age <= 19) ? 1 : 0;
    printf("%d\n", teenager);
    return 0;
}
