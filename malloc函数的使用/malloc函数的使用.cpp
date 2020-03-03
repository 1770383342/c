#include<stdio.h>
#include<malloc.h>

void f(int* q)
{
	*q = 200;
	//free(q);	//把q指向的内存释放
}

int main(void)
{
	int* p = (int*)malloc(sizeof(int));	//sizeof(int（）)返回值是int的字节长度
	*p = 10;
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);

	return 0;
}