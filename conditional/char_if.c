#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자를 입력하세요: ");
	//scanf_s("%c", &ch);
	ch = getchar(); // 1글자 입력받을 때 쓸 수 있는 코드
	
	if (ch >= 'A' && ch <= 'Z') // 65 ~ 90
		//(ch >= 65 && 초 <= 90)
		printf("대문자입니다.");


	else if (ch >= 'a' && ch <= 'z') // 97 ~ 122
		//(ch >= 97 && ch <= 122)
		printf("소문자입니다.");

	else if (ch >= '0' && ch <= '9') // 48 ~ 57
		//(ch >= 48 && ch <= 57)
		printf("숫자입니다.");

	else
		printf("그외 문자입니다.");

	return 0;
}