#include<stdio.h>
int GetFib(int n);

int main(void)
{
	int i, n;
	printf("������Ҫ���������n��");
	scanf_s("%d", &n);
	printf("Fibonacci���е�ǰ%d�\n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%10d", GetFib(i));
		if (i % 5 == 0)
			printf("\n");
	}
	return 0;
}
int GetFib(int n)
{
	if (n <= 1)
		return n;
	else
		return GetFib(n - 1) + GetFib(n - 2);
}
/* {
	int a = 1;
	int b = 1;
	int c = 1;//��һ���ڶ����ֵ
	while (n > 2)
	{
		c = a + b;//��ǰ����ĺ͸���c����
		a = b;
		b = c;
		n--;//ѭ����ÿ�ζ�������-1
	}
	return c;
}*/


