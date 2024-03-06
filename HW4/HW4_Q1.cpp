#include <iostream>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("請輸入一整數:");
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("輸入的數值為%d，為偶數\n", num);
	else
		printf("輸入的數值為%d，為奇數\n", num);
	system("pause");
	return 0;
}