#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); // 4
	printf("배수의 개수 입력: ");
	scanf("%d", &num);// 5
	while(cnt++<num) 
		// 0 < 5 참 -> cnt 1증가 하여 값이 1이 됨
		// 1 < 5 참 -> cnt 1증가 하여 값이 2가 됨
		// 2 < 5 참 -> cnt 1증가 하여 값이 3이 됨
		// 3 < 5 참 -> cnt 1증가 하여 값이 4가 됨
		// 4 < 5 참 -> cnt 1증가 하여 값이 5가 됨
		// 5 < 5 거짓 -> 탈출
	
		printf("%d ", i*cnt);
	// 3 * 1
	//3 * 2
	//3 * 3
	//3 * 4
	//3 * 5


}
