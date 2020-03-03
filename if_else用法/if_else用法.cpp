#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j;
    printf("比较i和j的大小\n请输入\n i = ");
    scanf("%d", &i);
    printf("请输入\n j = ");
    scanf("%d", &j);

    printf("\n结果：\n");

    if (i > j)
        printf(" i > j\n");
    else if (i == j)
        printf(" i = j\n");
    else
        printf(" i < j\n");

    return 0;
}