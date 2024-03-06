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
