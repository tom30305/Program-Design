#include <iostream>
#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int num1 = 0, num1_input, num1_output;
	int num2 = 0, R;
	printf("輸入一整數:");
	scanf_s("%d", &num1);
	num1_input = num1;
	printf("%d倒過來為:", num1_input);
	if (num1 > 0)
	{
		while (num1_input > 0)
		{
			int Q = 0;
			R = num1_input % 10;
			num1_output = num1_input;
			while (num1_output > 0)
			{
				num1_output = num1_output / 10;
				Q++;
			}
			num2 += R *(int)pow(10, Q - 1);
			printf("%d", R);
			num1_input = num1_input / 10;
		}
		printf("\n");
		printf("%d+%d=%d\n", num1, num2, num1 + num2);
	}
	if (num1 < 0)
	{
		printf("-");
		num1_input = abs(num1);
		while (num1_input > 0)
		{
			int Q = 0;
			R = num1_input % 10;
			num1_output = num1_input;
			while (num1_output > 0)
			{
				num1_output = num1_output / 10;
				Q++;
			}
			num2 += -(R * (int)pow(10, Q - 1));
			printf("%d", R);
			num1_input = num1_input / 10;
		}
		printf("\n");
		printf("%d%d=%d\n", num1, num2, num1 + num2);
	}
	system("pause");
	return 0;
}