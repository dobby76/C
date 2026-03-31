#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  pass = 1234;
	int qw = 0;

	while (pass != qw)
	{
		printf("암호를 입력하세요: ");
		scanf("%d", &qw);

		if (pass != qw)
		{
			printf("암호가 다릅니다.\n");
			printf("다시 입력하세요.\n");
		}
			
	}
	printf("로그인이 되었습니다.");
}