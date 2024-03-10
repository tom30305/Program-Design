#include<iostream>
#include<stdio.h>
#include<stdlib.h>
void fib(int a);

int main(void)
{
	int a,b;
	printf("Show each term of Fibonacci Number,from f(0) to f(?)");
	scanf_s("%d", &a);
	fib(a);
	system("pause");
	return 0;
}

void fib(int a)
{
	int i, sum, a1=0, a2=1;
	for (i = 0; i <= a; i++)
	{
		printf("f( %d ) = %d\n", i, a1);
		sum = a1 + a2;
		a1 = a2;
		a2 = sum;
	}
}
