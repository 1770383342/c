#include<stdio.h>;
int main(void)
{
	char ch1, ch2;
	do
	{
		printf("字母表的第一个字母是什么?\n");
		rewind(stdin);			//使用rewind()函数来清理输入缓冲区中的数据,重新从键盘取值
		ch1 = getchar();		//依次读取缓存区数据，读取第一个字符后会读取第二个字符回车，需要清空缓冲区中的数据
		//printf("%c", ch1);

		if (ch1 == 'a'||ch1 == 'A')
		{
			printf("对\n");
		}
		else
		{
			printf("错误\n");
		}

		printf("重复此题（Y），下一道题（N）: \n");
		rewind(stdin);			//使用rewind()函数来清理输入缓冲区中的数据,重新从键盘取值
		ch2 = getchar();
		//printf("%c", ch2);
	} while (ch2=='y'||ch2=='Y');

	do
	{
		printf("字母表的第二个字母是什么?\n");
		rewind(stdin);			//使用rewind()函数来清理输入缓冲区中的数据,重新从键盘取值
		ch1 = getchar();		//依次读取缓存区数据，读取第一个字符后会读取第二个字符回车，需要清空缓冲区中的数据
		//printf("%c", ch1);

		if (ch1 == 'b'||ch1 == 'B')
		{
			printf("对\n");
		}
		else
		{
			printf("错误\n");
		}

		printf("重复此题（Y），下一道题（N）: \n");
		rewind(stdin);			//使用rewind()函数来清理输入缓冲区中的数据,重新从键盘取值
		ch2 = getchar();
		//printf("%c", ch2);
	} while (ch2=='y'||ch2=='Y');

	printf("你已结束答题\n");

	return 0;
}