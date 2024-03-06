#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int a;
	printf("請輸入你的消費金額:");
	scanf_s("%d",& a);
	printf("恭喜獲得%d元的購物金!\n",a/1000*100);
	system("pause");
	return 0;
}