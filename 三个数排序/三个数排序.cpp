#include<stdio.h>

int main(void)
{
	int i, j, k;
	int t;
	printf("请输入三个整数来进行排序,数之间用空格隔开\n\n");
	scanf_s("%d %d %d", &i, &j, &k);

	if (i < j)
	{
		t = i;
		i = j;
		j = t;
	}
	if (i < k)
	{
		t = i;
		i = k;
		k = t;
	}
	if (j < k)
	{
		t = j;
		j = k;
		k = t;
	}

	printf("\n%d %d %d\n", i, j, k);

	return 0;
}
//三个数排序
//	i j k
//	1 2 3 
//	1 < 2 ==> 2 1 3
//	1 < 3 ==> 2 3 1
//	2 < 3 ==> 3 2 1
//
//	i j k
//	2 4 1
//	2 < 4 ==> 4 2 1
//	4 !< 1 ==> 4 2 1
//	2 !< 1 ==> 4 2 1