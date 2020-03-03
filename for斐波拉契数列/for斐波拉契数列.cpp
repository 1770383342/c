#include <stdio.h>

int main()
{
    int f1, f2;
	int f3;
    int n;
    int m;
    f1 = 1;
    f2 = 2;
    f3 = NULL;

    printf("请输入查询的位数：");
    scanf("%d", &n);

    if (1==n)
    {
        f3 = 1;
    }
    else if (2==n)
    {
        f3 = 2;
    }
    else
    {
        for ( m =3 ; m <= n ; m++)
        {
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
    }

    printf("%d\n", f3);


    return 0;
}