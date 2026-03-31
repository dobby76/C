//삼항연산자: if~else를 간결히 표현
//조건? A:B => 조건이 참이면 A 아니면 B

#include <stdio.h>

int main(void)
{
	/*int a = 10, b = 20;
	int max;

	max = a > b ? a : b;
	printf("%d", max);*/
	
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	num % 2 == 0 ? printf("짝수") : printf("홀수"); //삼항연산자 조건을 만족하면 ?뒤를 출력하고 아니면 :뒤를 출력한다.

	return 0;
	
}