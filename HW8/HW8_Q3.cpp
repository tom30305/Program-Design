#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c = 0;
	printf("請輸入有幾個人要算平均:");
	scanf_s("%d", &a);
	int *A = (int*)malloc(a * sizeof(int*));
	for (int i=0; i < a; i++)
	{
		printf("同學%d的成績為:", i+1);
		scanf_s("%f",&b);
		printf("輸入同學%d成績為:%.2f\n", i + 1,b);
		A[i] = b;
		c += b;
	}
	printf("這%d個同學成績平均為:%.2f\n", a, c / a);
	free(A);
	system("pause");
	return 0;
}

