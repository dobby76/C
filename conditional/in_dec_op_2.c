#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5 % 3; // 나머지 2
	a--; // a값 1 감소하여 a == 1
	b = (a++) + 3; // 1로 저장되어 있는 a값에 3을 더해 4로 b를 저장하고 a값에 1을 증가시켜 2가 된다.
	printf("%d, %d\n", a, b); //a = 2 b =4
	c = (++a) + 3; // a값에 1을 먼저 증가 시킨 후 2가된 a에 3을 더해 6으로  c에 저장한다.
	printf("%d, %d, %d", a, b, c); //a = 3 b =4 c =6
}