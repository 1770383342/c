#include<stdio.h>
#include<string.h>

struct Student 
{
	int age;
	char sex;
	char name[100];
};

void InputStudent(struct Student*);			//函数声明
void OutputStudent(struct Student*);

int main(void)
{
	struct Student st1;
	InputStudent(&st1);
	OutputStudent(&st1);

	//printf("%d %c %s\n", st1.age, st1.sex, st1.name);

	return  0;
}

void InputStudent(struct Student* pstu)
{
	(*pstu).age = 20;
	pstu->sex = 'M';
	strcpy_s(pstu->name, "张三");
}

void OutputStudent(struct Student *pst1)
{
	printf("%d %c %s\n", pst1->age, pst1->sex, pst1->name);
}