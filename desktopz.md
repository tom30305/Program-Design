HW3 
======
Question2
----------
```
#include <iostream>

#include<stdlib.h>

#include<stdio.h>

int main(void)

{

	int a, b;

	printf("¿é¤Ja¡Bb¨â­Ó¾ã¼Æ:");

	scanf\_s("%d %d", &a, &b);

	printf("a+b=%d\n",a+b);

	system("pause");

	return 0;

}

```
Question3
----------
```
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("輸入時間總秒數:");
	scanf("%d", &c);
	a = c / 3600;
	b = (c - a * 3600) / 60;
	c = c - (a * 3600 + b * 60);
	printf("時:分:秒:%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}
```
Question4
----------
```
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float pi = 3.1415926,g;
    int a, b, c, d, e, f;
	printf("Please enter Coordinate A:");
	scanf_s("%d %d", &a, &b);
	printf("Please enter Coordinate B:");
	scanf_s("%d %d", &c, &d);
	printf("Please enter Coordinate C:");
	scanf_s("%d %d", &e, &f);
	printf("A:(%d,%d),B:(%d,%d),C:(%d,%d)\n", a, b, c, d, e, f);
	printf("Vetor AB=(%d,%d)\t", c - a, d - b);	
	printf("Length AB=%f\n", sqrt(pow((c - a), 2) + pow((d - b), 2)));
	printf("Vetor AC=(%d,%d)\t", e - a, f - b);
	printf("Length AC=%f\n", sqrt(pow((e - a), 2) + pow((f - b), 2)));
	printf("Vetor BC=(%d,%d)\t", e - c, f - d);
	printf("Length BC=%f\n", sqrt(pow((e - c), 2) + pow((f - d), 2)));
	printf("\n");
	g= (sqrt(pow((c - a), 2) + pow((d - b), 2)) + sqrt(pow((e - a), 2) + pow((f - b), 2)) + sqrt(pow((e - c), 2) + pow((f - d), 2)) )/ 2;
	printf("Area of Triangle ABC is %f",abs(sqrt(g*(g- sqrt(pow((c - a), 2) + pow((d - b), 2)))*(g- sqrt(pow((e - a), 2) + pow((f - b), 2)))*(g- sqrt(pow((e - c), 2) + pow((f - d), 2))))));
	printf("\n");
	printf("A:(%f,%f)", sqrt(pow(a, 2) + pow(b, 2)), atan(b / a)*180/pi);
	printf("B:(%f,%f)", sqrt(pow(c, 2) + pow(d, 2)), atan(d / c)*180/pi);
	printf("C:(%f,%f)\n", sqrt(pow(e, 2) + pow(f, 2)), atan(f / e)*180/pi);
	system("pause");
	return 0;
}
```
Question5
----------
```
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int a;
	printf("請輸入你的消費金額:");
	scanf_s("%d",& a);
	printf("恭喜獲得%d元的購物金!\n",a/1000*100);
	system("pause");
	return 0;
}
```
Question6
----------
```
#include<iostream>
#include<stdio.h>

int main()
{
	float F, C;
	printf("請輸入攝氏溫度:");
	scanf_s("%f", &C);
	F =1.8*C+32;
	printf("華氏溫度為:%f\n", F);
	system("pause");
	return 0;
}
```