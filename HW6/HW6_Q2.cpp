#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

int main(void)
{
	clock_t start, end;
	double dur;
	int i = 1,a=0;
	printf("按下任意鍵開始計時\n");
	while (1)
	{
		if (_kbhit())
			break;
	}
	printf("====空白鍵: 分圈     esc: 暫停====\n");
	start = clock();
	while(1)
	{
			char ch = _getch();
			if (ch == '\x20')
			{
				end =clock();
				dur=end - start;
				printf("||第%d圈|| %f\n", i, dur/CLOCKS_PER_SEC);
				i++;
			}
	        if(ch=='\x1b')
			{
				break;
			}
	}
	system("pause");
	return 0;
}


