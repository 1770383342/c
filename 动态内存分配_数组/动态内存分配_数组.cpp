#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int* pArr;
	int len;
	int i;

	//动态构造一维数组
	printf("请输入要存放的元素的个数：");
	scanf("%d", &len);
	pArr = (int*)malloc(4 * len);

	//对一维数组赋值
	for ( i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}

	//对一维数组进行输出
	printf("一维数组的内容是：\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d ", pArr[i]);
	}

	return 0;
}