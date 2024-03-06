#include <iostream>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int month;
	printf("請輸入一個月份:");
	scanf_s("%d", &month);
	if (month > 12)
		printf("輸入錯誤\n");
	else if (month==2)
		    printf("%d月有28天\n", month);
	else if (month <= 7)
		if (month % 2 == 0)
			printf("%d月有30天\n", month);
		else
			printf("%d月有31天\n", month);
	else
		if (month % 2 == 0)
	        printf("%d月有31天\n", month);
		else
			printf("%d月有30天\n", month);
	system("pause");
	return 0;
}