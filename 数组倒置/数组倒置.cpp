#include<stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int i, j;
	int t;
	i = 0;
	j = 4;
	while (i<j)
	{
		t = a[i];			//t = a[0];a[0] = a[j];a[j] = t;
		a[i] = a[j];		//t = a[0];a[0] = a[5];a[5] = a[0];
		a[j] = t;			//t = a[1];a[1] = a[4];a[4] = a[1];

		i++;
		j--;
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d,", a[i]);
	}

	return 0;
}