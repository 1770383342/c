#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	//for ( i = 0; i < 101; i++)
	//{
	//	sum = sum + i;
	//}

	i = 0;
	while (i<101)		//�ȼ���forѭ��
	{
		sum = sum + i;
		i++;
	}

	printf("sum = %d\n", sum);

	return 0;
}