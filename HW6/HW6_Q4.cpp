#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a,b,A[1000] = {}, B[1000] = {}, SUM[13] = {};
	srand(time_t(NULL));
	for (int i = 0; i < 1000; i++)
	{
		A[i] = 1 + (7 - 1)*(int)rand() / RAND_MAX;
		B[i] = 1 + (7 - 1)*(int)rand() / RAND_MAX;
	}
	for (int i = 0; i < 1000; i++)
	{
		for(b=2;b<13;b++)
		if (A[i] + B[i] ==b)
			SUM[b]++;
	}
	for(a=2;a<13;a++)
	printf("#數值合為%d的次數:%d\n",a, SUM[a]);
	printf("============\n");
	printf("總計:1000次\n");
	system("pause");
	return 0;
}