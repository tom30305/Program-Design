#include <iostream>
int sum(int a);

int main(void)
{
	int a,end;
	printf("Please enter a number:");
	scanf_s("%d", &a);
	printf("%d! = ", a);
	end = sum(a);
	printf("%d\n",end);
	system("pause");
	return 0;
}
int sum(int a)
{
	int end = 1;
	for (int i = 1; i <= a; i++)
	{
		end = end * i;
	}
	return end;
}

