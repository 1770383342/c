#include<stdio.h>
#include<math.h>

int main(void)
{
	int a = 1;
	int b = 0;
	int c = -1;
	double t = b * b - 4 * a * c;
	double x1;
	double x2;
	if (t > 0)
	{
		x1 = (-b + sqrt(t)) / (2 * a);
		x2 = (-b - sqrt(t)) / (2 * a);
		printf("方程有两个解\n x1=%f\n x2=%f\n", x1, x2);
	}
	else if (t==0)
	{
		x1= (-b + sqrt(t)) / (2 * a);
		x2 = x1;
		printf("方程有一个解\n x1=x2=%f\n ", x1);
	}
	else
	{
		printf("该方程无解\n");
	}

}