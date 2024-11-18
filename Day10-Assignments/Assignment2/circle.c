#include <stdio.h>
#include <stdlib.h>
#include "circle.h"
int circle()
{
	int r;
	float area;
	printf("Enter radius : ");
	scanf("%d",&r);
	area=(float)3.14*r*r;
	printf("Area of circle : %f\n",area);
}
