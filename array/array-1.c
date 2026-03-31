#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[5] = { 10, 20, 30, 40, 50 };
	int num2[] = { 10, 20, 30 }; //묵시적 배열(3개의 방으로 구성되어있음. 초기값 3을 생략)
	printf("%d\n", num[2]); //30이 출력된다. 이유로는 컴퓨터는 숫자를 0부터 세기 때문이다.

	int num3[5] = { 1, 2 }; //1, 2, 0 , 0, 0}
	int num4[5] = { 4 }; // 4, 0, 0, 0, 0
	int num5[5] = { 0 }; //0, 0, 0, 0, 0
	
	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;

	//printf("%d\n", num6[0]);
	//printf("%d\n", num6[1]);
	//printf("%d\n", num6[2]);
	//printf("%d\n", num6[3]);
	//printf("%d", num6[4]);

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", num6[i]);
	}


	return 0;
}