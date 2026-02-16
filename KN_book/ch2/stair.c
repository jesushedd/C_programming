#include <stdio.h>

#define LINES 6
#define LEFT_PART

int main(int argc, char const *argv[])
{
    int spaces = 8;
    
    for (int i = 0; i < LINES; i++)
    {
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }

        printf("*\n");

        spaces--;
        
    }
    
    return 0;
}
