#include <stdio.h>

int main()
{
    int i;
    int  sum = 0;

    for ( i = 3; i <= 100; i++)
    {
        if (i%3==0)
        {
            sum = sum + i;
            printf("sum = %d\n", sum);
        }
        //printf("sum = %d\n", sum);
    }
    //printf("sum = %d", sum);

    return 0;
}