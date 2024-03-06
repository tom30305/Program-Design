#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a, b, c;
	printf("Please enter 3 different integers:");
	scanf_s("%d %d %d", &a,& b,& c);
	if (a > b &&b > c)
		printf("%d>%d>%d\n", a, b, c);
	if (a > c&&c > b)
		printf("%d>%d>%d\n",a,c,b );
	if (b > a &&a > c)
		printf("%d>%d>%d\n",b,a,c );
	if (b > c&&c > a)
		printf("%d>%d>%d\n",b,c,a );
	if (c > b &&b > a)
		printf("%d>%d>%d\n", c,b,a);
	if (c > a&&a > b)
		printf("%d>%d>%d\n", c,a,b);
	if (b + c > a&&a + c > b&&a + b > c)
		printf("It could be a triangle.\n");
	else
	{
		printf("It couldn't be a triangle.\n");
	}
	system("pause");
	return 0;
}

