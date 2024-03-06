#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <ctype.h>

int main(void)
{
	float a;
	char b;
	printf("請輸入溫度及溫標種類(C/F):");
	scanf_s("%f  %c", &a,&b);
		if (b == 'f' || b=='F')
			printf("%.2f華氏度為%.2f攝氏度\n", a, (a - 32) * 5 / 9);
		else if (b == 'C'|| b == 'c')
			printf("%.2f攝氏度為%.2f華氏度\n", a, a * 9 / 5 + 32);
		else
			printf("錯誤!溫標種類請輸入C/c/F/f\n");
	system("pause");
	return 0;
}