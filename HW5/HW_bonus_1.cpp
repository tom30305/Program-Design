#include <iostream>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
		int a, b, c,d,e,i=0;
	printf("請輸入兩個正整數:");
	scanf_s("%d %d", &a,& b);
	if (a > b)
	{
		c = a % b;
		while (c != 0)
		{
			d = b;
			e = c;
			c = d % e;
		}
		printf("最大公因數為%d\n", e);
		i = a * b / e;
		printf("最小公倍數為%d\n", i);
	}
	if(b>a)
	{
		c = b % a;
		while (c != 0)
		{
			e = a;
			d = c;
			c = e % d;
		}
		printf("最大公因數為%d\n", d);
		i = a * b / d;
		printf("最小公倍數為%d\n", i);
	}
	system("pause");
	return 0;
}

