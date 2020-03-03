#define _CRT_SECURE_NO_WARNINGS	//scanf等类似的函数已经不太安全
#include <stdio.h>
#include<math.h>

int main(void)
{
	//int i;

	//scanf("%d",&i);
	//printf("i=%d\n",i);

	//int i, j, k;
	//printf("请输入三个数字，用空格间隔\n");
	//scanf("%d %d %d",&i,&j,&k);	//%d之间用什么隔开输入就用什么隔开
	//printf("i=%d,j=%d,k=%d\n",i,j,k);

	float i, j, k;
	printf("已知三角形三边 i，j，k 求三角形面积的面积\n请输入i的值\ni = ");
	scanf("%f",&i);
	printf("请输入j的值\nj = ");
	scanf("%f", &j);
	printf("请输入k的值\nk = ");
	scanf("%f", &k);

	double p,s;
	p = (i + j + k) / 2;
	s = sqrt(p * (p - i) * (p - j) * (p - k));

	if (s > 0) 
	{
		printf("i=%f,j=%f,k=%f\n面积 s = %lf", i, j, k, s);
	}
	else printf("无法组成三角形！");	//还有问题

	return 0;
}