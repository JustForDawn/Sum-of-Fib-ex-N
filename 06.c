#include<stdio.h>
int GetFib(int n);

int main(void)
{
	int i, n;
	printf("请输入要计算的项数n：");
	scanf_s("%d", &n);
	printf("Fibonacci数列的前%d项：\n", n);
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
	int c = 1;//第一，第二项返回值
	while (n > 2)
	{
		c = a + b;//把前两项的和赋给c变量
		a = b;
		b = c;
		n--;//循环完每次都把项数-1
	}
	return c;
}*/


