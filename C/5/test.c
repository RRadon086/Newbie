#include <stdio.h>

#define URL "http://www.fishc.com"
#define NAME "鱼C工作室"
#define BOSS "小甲鱼"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main()
{
	printf("%s成立于%d年%d月%d日\n", NAME, YEAR, MONTH, DAY);
	printf("%s是%s创立的……\n", NAME, BOSS);
	printf("%s的域名是%s\n", NAME, URL);

	return 0;
}
