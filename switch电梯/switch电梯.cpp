#include<stdio.h>
int main(void)
{
	int l;
	printf("请输入你要前往的楼层：");
	scanf_s("%d", &l);

	switch (l)
	{
	case 1:
		printf("一层到");
		break;

	case 2:
		printf("二层到");
		break;

	case 3:
		printf("三层到");
		break;

	default:
		printf("还没修");
		break;
	}

	return 0;
}