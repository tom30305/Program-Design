#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  row, col;
	printf("please assign array row and col : ");
	scanf_s("%d %d", &row, &col);
	int **A = (int**)malloc(row*sizeof(int*));
	for (int i = 0; i < row; i++)
	{
		A[i] = (int*)malloc(col * sizeof(int));
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			A[i][j] =i+j;
			printf("A[%d][%d]=%d ", i, j, A[i][j]);
			printf("address of A[%d][%d]=0x%X\n", i, j, &A[i][j]);
		}
	}
    free(A[0]);
	free(A);
	system("pause");
	return 0;
}