#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, t;
	printf("请输入整数i\ni = ");
	scanf("%d",&i);
	printf("请输入整数j\nj = ");
	scanf("%d", &j);
	printf("\n");

	t = i;
	i = j;
	j = t;

	printf("i = %d ", i);
	printf("j = %d\n", j);

	return 0;
}