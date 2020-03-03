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

int main(void)
{
	int i;
	int n;
	printf("ÇëÊäÈënµÄÖµ£º");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			printf("%d\n", i);
		}
	}
	//if (IsPrime(n))
	//{
	//	printf("y");
	//}
	//else
	//{
	//	printf("n");
	//}

	return 0;
}