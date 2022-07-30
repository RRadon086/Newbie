#include <stdio.h>

#define FQ 3.7
#define JL 7
#define XQ 1.3
#define KXC 8
#define O 2.4
#define YC 9
#define HG 6.3
#define BLB 0.5

int main()
{
	float p1;
	float p2;
	float p3;

	p1 = FQ + 0.5 * KXC + 0.5 * YC;
	p2 = 1.5 * XQ + 0.25 * O + 2.5 * HG;
	p3 = 5 * HG + 10 * BLB;

	printf("小明需要支付%.2f元\n小红需要支付%.2f元\n小甲鱼需要支付%.2f元\n", p1, p2, p3);
	
	return 0;
}
