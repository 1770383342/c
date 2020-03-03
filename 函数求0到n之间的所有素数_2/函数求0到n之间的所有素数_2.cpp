#include<stdio.h>

bool IsPrime(int m)
{
	int i;
	for (i = 2; i < m; i++)
	{
		if (0 == m % i)
		{
			break;
		}
	}
	if (i == m)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Traverseval(int a)
{
	int i;
	for (i = 2; i <= a; i++)
	{
		if (IsPrime(i))
		{
			printf("%d\n", i);
		}
	}
}

int main(void)
{
	int n;
	printf("请输入n的值：");
	scanf_s("%d", &n);
	Traverseval(n);

	return 0;
}