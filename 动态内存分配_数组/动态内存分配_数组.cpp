#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int* pArr;
	int len;
	int i;

	//��̬����һά����
	printf("������Ҫ��ŵ�Ԫ�صĸ�����");
	scanf("%d", &len);
	pArr = (int*)malloc(4 * len);

	//��һά���鸳ֵ
	for ( i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}

	//��һά����������
	printf("һά����������ǣ�\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d ", pArr[i]);
	}

	return 0;
}