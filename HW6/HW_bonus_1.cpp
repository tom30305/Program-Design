#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main (void)
{
	char string[100] = {};
	int i=0,lenght=0,digit=0, space=0, chinese=0, uppercase=0, lowercase=0,punctuation=0;
		printf("請輸入密碼:");
		gets_s(string);
		printf("輸入密碼為:");
		puts(string);
		while (string[i] != '\0')
		{
			if (isascii(string[i]) == 0)
			{
				printf("密碼不可以有中文!\n");
				break;
			}
			if (isdigit(string[i]) != 0)
			{
				digit++;
			}
			if (isupper(string[i]) != 0)
			{
				uppercase++;
			}
			if (islower(string[i]) != 0)
			{
				lowercase++;
			}

	
				if (ispunct(string[i]) != 0)
				{
					printf("密碼不可以有標點符號:%c\n", string[i]);
					punctuation++;
				}
				if (isspace(string[i]) != 0)
				{
					printf("密碼不可以有空格!\n");
					space++;
				}
				i++;
			}
			if (digit < 2)
			{
				printf("至少要2個數字\n");
			}
			if (uppercase < 2)
			{
				printf("至少2個大寫字母\n");
			}
			if (lowercase < 2)
			{
				printf("至少2個小寫字母\n");
			}
			if (strlen(string) < 12)
			{
				printf("你只輸入了%d個密碼，至少12個\n", strlen(string));
			}
			if (strlen(string) < 12 || lowercase < 2 || uppercase < 2 || digit < 2 ||space>0 ||punctuation> 0 || isascii(string[i]) == 0)
			{
				printf("請重新設定符合規定的密碼!\n");
			}
			else
			{
				printf("你輸入了%d個密碼\n", strlen(string));
				printf("你輸入合格的密碼為:");
				puts(string);
				printf("其中包含數字:%d\n", digit);
				printf("其中包含文字:%d\n", strlen(string)-digit);
				printf("其中包含大寫:%d\n",uppercase);
				printf("其中包含小寫:%d\n",lowercase);
			}
system("pause");
return 0;
}

