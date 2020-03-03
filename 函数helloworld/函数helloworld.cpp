#include <stdio.h>

void Prent(int i)    //返回值为空
{
	if (i == 1)
	{
		printf("hello world\n");
	}
	else if (i == 2)
	{
		printf("你好\n");
	}
	else
	{
		printf("控你吉瓦\n");
	}
}

int main(void)
{
	int a;
	scanf_s("%d", &a);
    Prent(2);

    return 0;
}