\#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

int main(void)
{
	printf("a:\n");
	int i, j,num;
	for (i = 1; i < 11;i++)
	{
		num = i;
		for (j = 0; j < num; j++)
			printf("*");
		printf("\n");
	}
	printf("b:\n");
	int q, w, e;
	for (q = 1; q < 11; q++)
	{
		e =11- q;
		for (w = 0;w < e;w++)
			printf("*");
		printf("\n");
	}
	printf("c:\n");
	int r,t,y;
	for (r = 1; r < 11; r++)
	{
		y = r;
		for (t = 1; t < 11; t++)
			if (t < y)
				printf(" ");
			else
				printf("*");
		printf("\n");
	}
	printf("d:\n");
	int u, p, o;
	for (u = 1; u < 11; u++)
	{
		o = 11-u;
		for (p = 1;p< 11; p++)
			if (p < o)
				printf(" ");
			else
				printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}