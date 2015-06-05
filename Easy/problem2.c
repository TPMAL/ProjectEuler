#include <stdio.h>

int main()
{
    register int i;
    int sum = 2;
    int help = 1;
    int next = 0;
    int atm = 2;

    while(next <= 4000000)
    {
        next = help + atm;
        help = atm;
        atm = next;
        if(atm % 2 == 0)
        {
            sum += atm;
        }
    }
    printf("%d\n", sum);

    return 0;
}
