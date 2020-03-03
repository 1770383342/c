#include<stdio.h>

int main(void)
{
	int * p;		//p是变量的名字，int * 表示p变量存放的啊int类型变量的地址
	int i = 3;
	int j;

	p = &i;			/*
						1.p保存了i的地址，因此p指向i
						2.p不是i，i不是p，修改p的值不影响i的值，反之亦然
						3.如果一个指针变量指向了某个普通变量，
							则 *指针变量  就完全等同于  普通变量
					*/
	j = *p;			//*p就是以p的内容为地址的变量
	printf("%d %d", i, j);

	return 0;
}