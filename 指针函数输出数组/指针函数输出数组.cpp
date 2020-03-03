#include<stdio.h>

void hanshu(int* pArr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d", *(pArr+i));
		//printf("%d", pArr[i]);
	}
	printf("\n");

}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	//int b[4] = { 2,6,3,2 };
	//int c[20] = { 6,7,5,4,8 };

	printf("%d %d\n", *(a + 0),a[0]);	//*(a+i)等价于a[i]

	hanshu(a, 5);
	//hanshu(b, 4);
	//hanshu(c, 20);

	return 0;
}