#include<stdio.h>
int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	//a�����������5��ʾ�����Ԫ��,��a[0]��ʼ
	//ֻ���ڶ��������ͬʱ�ſ������帳ֵ
	//int a[3];
	//a[3] = {0,1,2};
	//����д���Ǵ����
	printf("a[5] = { 1,2,3,4,5 }\n");
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("a[0] = %d\n", a[0]);	//Ԫ�����
	printf("a[1] = %d\n", a[1]);
	printf("a[2] = %d\n", a[2]);
	printf("...\n");
	printf("a[4] = %d\n", a[4]);

	//������a[]��ֵ��������b[]
	int b[5];
	for ( i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", b[i]);
	}

	//������Ԫ�ظ�ֵ
	int c[5];
	int m;
	printf("\n�������m��Ԫ�ظ�ֵ m = ");
	scanf("%d", &m);
	printf("ֵΪ��");
	scanf("%d", &c[m]);
	printf("c[%d] = %d\n", m,c[m]);
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n", c[i]);
	}

	return 0;
}