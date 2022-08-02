#include <stdio.h>

int main()
{
	int fah;
	float cel;
	
	printf("请输入华氏度：");
	scanf("%d", &fah);

	cel = (fah - 32) * 5 / 9;

	printf("转换为摄氏度是：%.2f\n", cel);

	return 0;
}
