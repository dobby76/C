#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	for (int num = 1; num <= 12; num += 3) // 한 줄에 3개의 단을 출력하기 위해 num을 3씩 증가시키며 12까지 반복
	{
		printf("\t%d단\t%d단\t\t%d단\n", num, num + 1, num + 2); // 현재 단(num)을 기준으로 연속된 3개의 단을 함께 출력

		for (int max = 1; max <= 9; max++)
		{
			printf("%d * %d = %2d\t", num, max, num * max);
			printf("%d * %d = %2d\t", num + 1, max, (num + 1) * max); // num 다음 단을 출력하기 위해 +1 (연속된 단 구성)
			printf("%d * %d = %2d\n", num + 2, max, (num + 2) * max); // num 기준으로 3번째 단을 출력하기 위해 +2
		}
	}
	return 0;
}