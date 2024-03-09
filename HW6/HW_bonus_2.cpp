#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(void)
{
	int max, min,a;
	int i=0;
	printf("請輸入上、下界:");
	scanf_s("%d %d", &max, &min);
	int num,b;


	srand(time_t(NULL));
	num = min+ (max-min)* (int)rand() / RAND_MAX;
	printf("請猜測%d~%d之間的整數值:",max,min);
	scanf_s("%d",& a);
	while (a != num)
	{
		if (a > num)
		{
			printf("%d大於正確值\n", a);
			printf("再猜一次:");
			scanf_s("%d", &a);
		}
		if (a < num)
		{
			printf("%d小於於正確值\n", a);
			printf("再猜一次:");
			scanf_s("%d", &a);
		}
		i++;
		if (i > 8)
			break;
	}
	if (a != num)
		printf("再接再厲，正確答案為%d\n", num);
	else
	{
		printf("你答對了共猜了%d次，正確答案為%d\n", i + 1, num);
	}
	system("pause");
	return 0;
}