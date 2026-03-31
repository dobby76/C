#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 2;
	//int sum = 0; // 합계 누적할 변수
	//while (a <= 100)
	//{
	//	//printf("%d\n", a);
	//	sum = sum + a;
	//	a = a + 2; // a += 1;
	//}
	//printf("1~100합은: %d", sum);
	//return 0;

	int num, i = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("handaman!\n");
		i++;
	}

}