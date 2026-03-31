#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j, k;
	float l;

	printf("10명의 점수를 입력하세요: ");
	scanf("%d %d %d %d %d %d %d %d %d %d",
		&a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

	k = a + b + c + d + e + f + g + h + i + j;
	l = (float)k / 10;

	printf("합계:%d\t평균:%.2f", k, l);
}