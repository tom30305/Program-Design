#include <iostream>
#include<stdio.h>
#include<stdlib.h>

void ans(float a, float b, float c);
int main(void)
{
	int a, b, c;
	printf("請輸入一元二次方程式的係數(ax^2+bx+c=0):");
	scanf_s("%d %d %d", &a,& b, &c);
	ans(a, b, c);
	system("pause");
	return 0;
}
void ans(float a, float b,float c)
{
	float dis,root1,root2,real,ima;
	dis= b * b - 4*a*c;
	if (dis > 0)
	{
		printf("root1 =%.3f\n", (-b + sqrt(dis)) / (2 * a));
		printf("root2 =%.3f\n",(-b - sqrt(dis)) / (2 * a));
	}
	else if (dis == 0)
	{
		printf("root1 =%.3f\n ",(-b + sqrt(dis)) / (2 * a));
		printf("root2 =%.3f\n ",(-b - sqrt(dis)) / (2 * a));
	}
	else
	{
		real = -b / (2 * a);
		ima = sqrt(-dis) / (2 * a);
		printf("root1=%f+%fi\n", real, ima);
		printf("root2=%f-%fi\n", real, ima);
	}
}