#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float a, b, c;
	printf("請輸入你的身高(cm)與體重(kg):");
	scanf_s("%f %f",& a,& b);
	c = b / (pow((a / 100), 2));
	if (c >=18.5 && c<=24)
		printf("恭喜~你很標準\n");
	else if(c>24)
	{
		printf("過重了，少吃一點吧\n");
	}
	else
		printf("太瘦了，多吃一點吧\n");
	system("pause");
	return 0;
}

