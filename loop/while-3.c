#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, num2;
	int max = 1;
	printf("출력하고 싶은 단을 입력하세요: ");
	scanf("%d", &num);
	
	while (max != 10)
	{
		num2 = num * max;
		printf("%d * %d = %d\t", num, max, num2); // \t는 자동 tab이다.

		max += 1;
	}
}