#include<stdio.h>
#include<iostream>
#include<stdlib.h>
int v;

int main(void)
{
	for (v = 0; v < 5; v++)
	{
		int num, i, a, sum = 0;
		printf("請輸入十進位之整數值:");
		scanf_s("%d", &num);
		for(i=0;num >0;i++)
		{
			a = num % 2;
			num = num / 2;
			sum = sum + a * pow(10, i);
		}
		printf("%d", sum);
		printf("\n");
	}
	system("pause");
	return 0;
}
