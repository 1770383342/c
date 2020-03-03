#include<stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st1;
	struct Student* pst1 = &st1;
	pst1->age = 20;					//等价于*pst1.age
	st1.score = 90.5f;				//90.5是double类型，加f转float类型
	
	printf("%d %f", pst1->age, st1.score);

	return 0;
}