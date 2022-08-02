#include <stdio.h>

int main()
{
	char a[];
	int h;
	float m, in;
	double lb;

	printf("请输入您的姓名：");
	scanf("%s", &a);

	printf("请输入您的身高（cm）：");
	scanf("%d", &h);

	printf("请输入您的体重（kg）：");
	scanf("%f", &m);

	printf("========== 正在为您转换 ==========\n");
	
	in = h / 2.54;
	lb = m / 0.453;

	printf("%s的身高是%.2f（in），体重是%.2f（lb）\n", a, in, lb);
	
	return 0;
}
