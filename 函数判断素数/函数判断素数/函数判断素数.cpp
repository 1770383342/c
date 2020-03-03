#include<stdio.h>

bool Isprime(int a)
{
	int i;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			break;
		}
	}

	if (i == a)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int m;
	printf("判断一个数是否是素数\n请输入一个数：");
	scanf_s("%d", &m);

	if (Isprime(m))
	{
		printf("是\n");
	}
	else
	{
		printf("否\n");
	}

	return 0;
}