#include <stdio.h>
#include <math.h>

int main()
{
    register long i;
    long prime;
    long biggest = 0;
    int flag = 0;
    register long j;
    for(i = 1; i <= sqrt(600851475143); i++)
    {
        if(600851475143 % i == 0)
        {
            for(j = 2;j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                prime = i;
                if(biggest <= prime)
                {
                    biggest = prime;
                }
            }
        }
    }

    printf("%d\n", biggest);

    return 0;
}
