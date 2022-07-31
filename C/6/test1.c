#include <stdio.h>

int main()
{
	int i;
	char j;
	float k;
	
	i = 123;
	j = 'c';
	k = 3.14;

	printf("i = %d\n", sizeof i);
        printf("j = %d\n", sizeof(j));
        printf("k = %d\n", sizeof(k));

        return 0;
}

