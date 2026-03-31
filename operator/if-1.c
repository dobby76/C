#include <stdio.h>

int main()
{
	/*int a = 8, b = 10, c;
	if (a++ >= b--)
		c = a - b;
	else
		c = a + b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d", c);*/

	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2);
}
