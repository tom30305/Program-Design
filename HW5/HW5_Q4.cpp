#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
int i, j,  num;
float k, pi , PI;
for (i = 0; i < 11000; i += 1000)
{
	num = i;
	pi = 4;
	printf("n=%d時，pi的逼近解為:", i);
	for (j = 2; j <num; j++)
	{
		k = 4 * pow((-1), j + 1) / (2 * j - 1);
		pi =pi+ k;
	}
	printf("%.6f\n",pi );
}
PI = acos(-1.);
printf("實際PI值為:%.6f\n",PI);
	system("pause");
	return 0;
}