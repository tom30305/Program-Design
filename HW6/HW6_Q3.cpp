#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	int a;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("請輸入月份:");
	scanf_s("%d", &a);
	while (1)
	{
		if (a > 12)
		{
			printf("請輸入1~12月份:");
			scanf_s("%d", &a);
		}
		else
		{
			break;
		}
	}
printf("%d月有%d天\n", a, month[a]);
    
	system("pause");
	return 0;
}