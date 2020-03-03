#include<stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st1 = { 20,90,'M' };
	struct Student st2;
	st2.age = 21;
	st2.score = 92;
	st2.sex = 'W';

	printf("%d %f %c\n", st1.age, st1.score, st1.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);

	return 0;
}