#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main(void)
{
	int a, i,people,sum=50;
	for (i = 0; i < 50; i++)
	{
		if (i % 3 == 0)
			people = 'A';
		if (i % 3 == 1)
			people = ' B';
		if (i % 3 == 2)
			people = 'C';
		printf("It's %c's turn.\n", people);
		printf("%c:I'll take ", people);
		scanf_s("%d", &a);
		if (sum <= 3)
		{
			while (a > 2)
			{
				printf("Please enter a number that is small than 2.\n");
				printf("%c:I'll take ", people);
				scanf_s("%d", &a);
			}
		}
		while (a > 3)
		{
			printf("Please enter a number from 1 to 3.\n");
			printf("%c:I'll take ", people);
			scanf_s("%d", &a);
		}
		sum = sum - a;
		printf("Remains:%d\n", sum);
		if (sum <= 0)
			break;
	}
	printf("%c lose\n", people);
	system("pause");
	return 0;
}