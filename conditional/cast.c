#include <stdio.h>

int main()
{
	/*int a;
	a = sizeof(int) + sizeof(char); // int는 4byte로 4, char은 1byte로 1이기에 a는 4 + 1을 하여 5가 된다.
	printf("%d", a);
	return 0;*/

	//int a = 7 + 6;
	//int b = (int)7.3 + (int)6.7; // 강제 형 변환은 실수를 정수로 변환할 때 *반올림*하지 않는다. 그러하여 7 + 6을 하여 b는 13이 되는것이다.
	//printf("%d %d", a, b);


	float t;
	t = 10 / 3; // 정수로 먼저 연산을 하고 실수로 바꾸어서 3.0000이 나온다. 연산을 먼저하고 대입을 한다.
	printf("%f", t);
	t = (float)10 / 3; // 10을 실수로 먼저 바꾸어 연산을 하므로 3.3333이 나온다.
	printf("%f", t);
	return 0;
}