#include <stdio.h>

int main()
{
    register int i;
    register int j;
    int square_sum = 0;
    int sum_square = 0;
    int difference;

    for(i = 1; i <= 100; i++)
    {
        sum_square += (i * i);
    }
    for(j = 1; j <= 100; j++)
    {
        square_sum += j;
    }
    square_sum *= square_sum;

    printf("%d\n", sum_square);
    printf("%d\n", square_sum);
    difference = square_sum - sum_square;
    printf("%d\n", difference);

    return 0;
}
