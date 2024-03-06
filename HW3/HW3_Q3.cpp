#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("輸入時間總秒數:");
	scanf("%d", &c);
	a = c / 3600;
	b = (c - a * 3600) / 60;
	c = c - (a * 3600 + b * 60);
	printf("時:分:秒:%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}