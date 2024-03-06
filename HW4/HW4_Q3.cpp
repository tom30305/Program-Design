#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int a, b;
int main(void)
{
	printf("請輸入一個整數:");
	scanf_s("%d",& a);
	b = abs(a);
	printf("%d的絕對值為%d\n", a, b);
	system("pause");
	return 0;
}