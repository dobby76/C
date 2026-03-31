#define _CRT_SECURE_NO_WARNINGS //scanf_s를 안 해도 오류가 안 나게 해주는 코드
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int res1;
	char op;
	double res2;
	char a;
	while (1) //참일때 계속 반복하는 반복문이다.
	{
		printf("첫번째 숫자 입력: ");
		scanf("%d", &num1);

		printf("연산자 입력(+ - * /): ");
		scanf(" %c", &op);

		printf("두번째 숫자 입력: ");
		scanf("%d", &num2);

		switch (op)
		{
		case '+':
			res1 = num1 + num2;
			break;

		case '-':
			res1 = num1 - num2;
			break;

		case '*':
			res1 = num1 * num2;
			break;

		case '/':
			res2 = (double)num1 / num2; 
			break;
		}
		if (op == '+' || op == '-' || op == '*') // '||' 이 표시는 'or'이라는 표시이다. '+'또는 '-'또는 '*'일 경우 위에서 case문으로 계산된 res1을 출력하는 코드이다.
		{
			printf("연산 결과: %d\n", res1);
		}
		else if (op == '/')
		{
			printf("연산 결과: %.2f\n", res2);
		}

		else
		{
			printf("입력 오류");
		}

		printf("연산을 종료하시겠습니까?(y/Y)\n");
		scanf(" %c", &a);
		if (a == 'y' || a == 'Y') //이 코드는 'y' 또는 'Y'일 경우 반복문(while)을 종료하는 코드이다.
			break;

	}

	return 0;
}