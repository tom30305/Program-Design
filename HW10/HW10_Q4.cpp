#include <iostream>
#include<stdlib.h>
#include<stdio.h>	
#include<time.h>

void  twoD(int A[], int row, int col);
void  mul(int A[], int B[],int D[],int m, int n, int p);

int main()
{
	int m, n, p, q;
	printf("Array size of A :");
	scanf_s("%d %d", &m, &n);
	printf("Array size of B :");
	scanf_s("%d %d", &n, &p);
	printf("Array size of C :");
	scanf_s("%d %d", &p, &q);
	int *A = (int*)malloc(m*n * sizeof(int));
	int *B = (int*)malloc(n*p * sizeof(int));
	int *C = (int*)malloc(p*q * sizeof(int));
	int *D = (int*)malloc(m*p * sizeof(int));
	int *E = (int*)malloc(m*q * sizeof(int));
	srand(time_t(NULL));
	for (int i = 0; i < m*n; i++)
	{
		A[i] = (rand() % 10) + 1;
	}
	for (int i = 0; i < n*p; i++)
	{
		B[i] = (rand() % 10) + 1;
	}
	for (int i = 0; i < p*q; i++)
	{
		C[i] = (rand() % 10) + 1;
	}
	printf("A = \n");
	twoD(A, m, n);
	printf("B = \n");
	twoD(B, n, p);
	printf("C = \n");
	twoD(C, p, q);
	printf("D = A*B = \n");
	mul(A, B, D, m, n, p);
	twoD(D, m, p);
	printf("E  = A*B*C =\n");
	mul(D, C, E, m, p, q);
	twoD( E, m, q);
	free(A);
	free(B);
	free(C);
	free(D);
	free(E);
	system("pause");
	return 0;
}

void  twoD(int A[], int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				printf("%d   ", A[i*col + j]);
			}
			printf("\n");
		}
	}

void  mul(int A[], int B[],int D[], int m, int n, int p)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			D[i*p + j] = 0;
			for (int k = 0; k < n; k++)
				D[i*p + j] = D[i*p + j] + A[i*n + k] * B[k*p +j];
		}
	}
}
