#include <stdio.h>

int main()
{
    register int i;
    register int j;
    int alert = 0;
    #define BIG_NUMBER 1000000000
    for(i = 20; i < BIG_NUMBER; i++)
    {
        if(alert == 1)
        {
            break;
        }
        for(j = 1; j <= 20;)
        {
            if(i % j == 0)
            {
                if(j == 20)
                {
                    printf("%d\n", i);
                    alert++;
                    break;
                }
                j++;
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}
