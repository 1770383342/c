#include<stdio.h>;
int main(void)
{
	char ch1, ch2;
	do
	{
		printf("��ĸ��ĵ�һ����ĸ��ʲô?\n");
		rewind(stdin);			//ʹ��rewind()�������������뻺�����е�����,���´Ӽ���ȡֵ
		ch1 = getchar();		//���ζ�ȡ���������ݣ���ȡ��һ���ַ�����ȡ�ڶ����ַ��س�����Ҫ��ջ������е�����
		//printf("%c", ch1);

		if (ch1 == 'a'||ch1 == 'A')
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}

		printf("�ظ����⣨Y������һ���⣨N��: \n");
		rewind(stdin);			//ʹ��rewind()�������������뻺�����е�����,���´Ӽ���ȡֵ
		ch2 = getchar();
		//printf("%c", ch2);
	} while (ch2=='y'||ch2=='Y');

	do
	{
		printf("��ĸ��ĵڶ�����ĸ��ʲô?\n");
		rewind(stdin);			//ʹ��rewind()�������������뻺�����е�����,���´Ӽ���ȡֵ
		ch1 = getchar();		//���ζ�ȡ���������ݣ���ȡ��һ���ַ�����ȡ�ڶ����ַ��س�����Ҫ��ջ������е�����
		//printf("%c", ch1);

		if (ch1 == 'b'||ch1 == 'B')
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}

		printf("�ظ����⣨Y������һ���⣨N��: \n");
		rewind(stdin);			//ʹ��rewind()�������������뻺�����е�����,���´Ӽ���ȡֵ
		ch2 = getchar();
		//printf("%c", ch2);
	} while (ch2=='y'||ch2=='Y');

	printf("���ѽ�������\n");

	return 0;
}