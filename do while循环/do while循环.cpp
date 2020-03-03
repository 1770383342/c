//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	char ch;
	do
	{
		double a,b,c;
		printf("请输入函数 ax^2+bx+c=0 的三个系数：\n a = ");
		scanf("%lf", &a);
		printf(" b = ");
		scanf("%lf", &b);
		printf(" c = ");
		scanf("%lf", &c);

		double t = b * b - 4 * a * c;
		double x1;
		double x2;

		if (t > 0)
		{
			x1 = (-b + sqrt(t)) / (2 * a);
			x2 = (-b - sqrt(t)) / (2 * a);
			printf("方程有两个解\n x1=%lf\n x2=%lf\n", x1, x2);
		}
		else if (t == 0)
		{
			x1 = (-b + sqrt(t)) / (2 * a);
			x2 = x1;
			printf("方程有一个解\n x1=x2=%lf\n ", x1);
		}
		else
		{
			printf("该方程无解\n");
		}

		printf("你是否还要继续（y/n）：");
		//ch = getchar();
		scanf(" %c", &ch);

	} while (ch=='y'||ch=='Y');

	return 0;
}