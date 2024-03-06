#include<iostream>
#include<stdio.h>

int main()
{
	float F, C;
	printf("請輸入攝氏溫度:");
	scanf_s("%f", &C);
	F =1.8*C+32;
	printf("華氏溫度為:%f\n", F);
	system("pause");
	return 0;
}

