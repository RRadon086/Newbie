#include <stdio.h>

int main()
{
	int r;
	float c;
	float s;
	r = 5;
	c = r * 2 * 3.14;
	s = r * r * 3.14;
	printf("半径为%d的圆，周长是%.2f，面积是%.2f", r, c, s);
	return 0;
}
