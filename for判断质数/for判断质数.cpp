#include<stdio.h>

int main(void)
{
	int a = 0;	
	int m, i;
	printf("请输入一个整数：");
	scanf_s("%d", &m);

	for (i = 2; i < m; i++)	//m除以（2~m-1）
	{
		if (m%i==0)	//如果i能被m整除
		{
			a++;	//a自增
		}
	}

	if (a==0)		//a为0则是质数
	{
		printf("\n%d是质数\n", m);
	}
	else			//a不为0则不是质数
	{
		printf("\n%d不是质数\n", m);
	}

	return 0;
}