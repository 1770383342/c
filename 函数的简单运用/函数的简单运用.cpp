#include<stdio.h>

//max是函数的名字
//i，j是形式参数
//void表示函数没有返回值
void max(int i, int j)
{
	if (i>j)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", j);
	}
}

int main(void)
{
	int a, b, c, d, e, f;
	a = 2, b = 3, c = 5, d = 20, e = 14, f = 7;
	max(a, b);
	max(c, d);
	max(e, f);

	return 0;
}