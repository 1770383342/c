#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    int m;

    i = j = 3;
    k = i++;    //运行完成之后i+1  k = 3
    m = ++j;    //j+1完成之后运行  m = 4

    printf("i = %d j = %d k = %d m = %d\n", i, j, k, m);


    return 0;
}

    //  i = 4 j = 4 k = 3 m = 4