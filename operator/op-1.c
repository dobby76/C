#include <stdio.h>

int main()
{
	//int a, b, c;
	//a = 5 % 3;
	//a--;
	//b = (a++) + 3;
	//printf("%d, %d\n", a, b);
	//c = (++a) + 3;
	//printf("%d, %d, %d", a, b, c

	//int num1 = 16, num2 = 44;
	//int a = num1++;
	//int b = --num2;
	//printf("%d", a + b);

	int val1 = 10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2 == 12); // &&은 둘 다 참이여야 참이다. 둘 다 참이기 떄문에 1이다
	result2 = (val1 < 12 || val2 > 12); // ||은 둘 중 하나만 참이면 참이다. 둘 중 하나가 참이기 떄문에 1이다.
	result3 = (!val1); // 값이 0이면 참, 값이 0이 아니면 거짓이다. val1의 값이 10이므로 거짓이기 때문에 0이다.
	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("reslut3 : %d \n", result3);
}