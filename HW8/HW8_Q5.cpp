#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int a;
	float b;
	printf("輸入方陣大小:");
	scanf_s("%d", &a);
	float *A = (float*)malloc(pow(a, 2) * sizeof(float));
	printf("輸入陣列 A 的元素(輸入方陣大小平方個):");
	for (int i = 0; i < pow(a, 2); i++)
	{
		scanf_s("%f", &b);
		A[i] = b;
	}
	printf("一維陣列 A 轉成二維陣列 B=\n");
	for (int j = 0; j < a;j++)
	{
		for (int i = 0; i < a; i++)
		{
			printf("%.2f   ", A[a*j+i]);
		}
		printf("\n");
	}
	printf("將 B 轉置=\n");
	for (int j = 0; j < a; j++)
	{
		for (int i = 0; i < a; i++)
		{
			printf("%.2f   ", A[i*a + j]);
		}
		printf("\n");
	}
	free(A);
	system("pause");
	return 0;
}
