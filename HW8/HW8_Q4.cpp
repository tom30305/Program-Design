#include <iostream>
#include<stdlib.h>

int main()
{
	char *A[5][20];
	char *B[1][10];
	for (int i = 0; i < 5; i++)
	{
		printf("Please enter student %d's name : \n", i+1);
		scanf_s("%s", A[i], 19);
	}
	printf("Please enter a name.\n");
	scanf_s("%s", B[0],9);
	for (int i = 0; i < 5; i++)
	{
		if (*B[0] == *A[i])
		{
			printf("This name is in the list.\n");
			system("pause");
			return 0;
		}
	}
	printf("This name is not in the list.\n");
	system("pause");
	return 0;
}