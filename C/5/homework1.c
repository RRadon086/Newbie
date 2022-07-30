#include <stdio.h>

#define PI 3.14159
#define S(r) r * r * PI
#define C(r) r * 2 * PI

int main()
{
	int r = 5;

	printf("半径为%d的圆，面积是：%.2f，周长是%.2f\n", r, S(r), C(r));

	return 0;
}
