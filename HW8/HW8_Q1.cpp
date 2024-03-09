#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include "stdio.h"

int main()

{
	for (int k = 0; k < 3; k++)
	{
		int num, a[100], temp, i = 0, m = 0, SIZE;
		char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
		printf("enter a dec num: ");
		scanf_s("%d", &num);
		temp = num;
		while (num > 0)
		{
			a[i] = num % 16;
			num = num / 16;
			i++;
		}
		SIZE = i;
		char *A = (char*)malloc(SIZE * sizeof(char));
		for (int j = 0; j < SIZE; j++)
		{
			A[j] = a[j];
		}
		printf("最高次項為 %d，十六進制後為 %d 位數，配置 %d bytes 來儲存...\n", i-1, i, i * sizeof(A));
		printf("%d in hex is :  ", temp);
		for (i = i - 1; i >= 0; i--)
		{
			m = A[i];
			printf("%c", hex[m]);
		}
		printf("\n");
		printf("\n");
		free(A);
	}
	system("pause");
	return 0;
}


	
