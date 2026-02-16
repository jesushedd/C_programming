#include <stdio.h>

int main(int argc, char const *argv[])
{
    int first, second, third, fourth;
    int sum_col1 = 0;
    int sum_col2 = 0;
    int sum_col3 = 0;
    int sum_col4 = 0;

    int sum_row1 = 0;
    int sum_row2 = 0;
    int sum_row3 = 0;
    int sum_row4 = 0;

    int sum_top_diagonal = 0;
    int sum_bot_diagonal = 0;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    
    //read first row
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);
        //acumulate sums
        sum_row1 = first + second + third + fourth;
        
        sum_col1 = sum_col1 + first;
        sum_col2 = sum_col2 + second;
        sum_col3 = sum_col3 + third;
        sum_col4 = sum_col4 + fourth;

        sum_top_diagonal = sum_top_diagonal + first;

        sum_bot_diagonal = sum_bot_diagonal + fourth;

        printf("%2d %2d %2d %2d\n", first, second, third, fourth);

    //read second row
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);

        //acumulate sums
        sum_row2 = first + second + third + fourth;

        sum_col1 = sum_col1 + first;
        sum_col2 = sum_col2 + second;
        sum_col3 = sum_col3 + third;
        sum_col4 = sum_col4 + fourth;

        sum_top_diagonal = sum_top_diagonal + second;

        sum_bot_diagonal = sum_bot_diagonal + third;

        printf("%2d %2d %2d %2d\n", first, second, third, fourth);

    //read third row
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);

        //acumulate sums
        sum_row3 = first + second + third + fourth;

        sum_col1 = sum_col1 + first;
        sum_col2 = sum_col2 + second;
        sum_col3 = sum_col3 + third;
        sum_col4 = sum_col4 + fourth;

        sum_top_diagonal = sum_top_diagonal + third;

        sum_bot_diagonal = sum_bot_diagonal + second;

        printf("%2d %2d %2d %2d\n", first, second, third, fourth);


    
    //read fourth row
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);

        //acumulate sums

        sum_row4 = first + second + third + fourth;

        sum_col1 = sum_col1 + first;
        sum_col2 = sum_col2 + second;
        sum_col3 = sum_col3 + third;
        sum_col4 = sum_col4 + fourth;

        sum_top_diagonal = sum_top_diagonal + fourth;

        sum_bot_diagonal = sum_bot_diagonal + first;

        printf("%2d %2d %2d %2d\n", first, second, third, fourth);

    printf("\nRow sums: %d %d %d %d\n", sum_row1, sum_row2, sum_row3, sum_row4);
    printf("Column sums: %d %d %d %d\n", sum_col1, sum_col2, sum_col3, sum_col4);
    printf("Diagonal sums: %d %d", sum_top_diagonal, sum_bot_diagonal);






    return 0;
}
