#include<stdio.h>
int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	//a是数组的名，5表示有五个元素,从a[0]开始
	//只有在定义数组的同时才可以整体赋值
	//int a[3];
	//a[3] = {0,1,2};
	//这种写法是错误的
	printf("a[5] = { 1,2,3,4,5 }\n");
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("a[0] = %d\n", a[0]);	//元素输出
	printf("a[1] = %d\n", a[1]);
	printf("a[2] = %d\n", a[2]);
	printf("...\n");
	printf("a[4] = %d\n", a[4]);

	//把数组a[]的值赋给数组b[]
	int b[5];
	for ( i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", b[i]);
	}

	//给数组元素赋值
	int c[5];
	int m;
	printf("\n给数组的m的元素赋值 m = ");
	scanf("%d", &m);
	printf("值为：");
	scanf("%d", &c[m]);
	printf("c[%d] = %d\n", m,c[m]);
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", c[i]);
	}

	return 0;
}