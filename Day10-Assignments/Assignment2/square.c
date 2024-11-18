#include <stdio.h>
#include <stdlib.h>
#include "square.h"
int square()
{
	int s,a;
	printf("Enter side of a square : ");
	scanf("%d",&s);
	a=s*s;
	printf("Area : %d\n",a);
}
