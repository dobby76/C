#include <stdio.h>

int main()
{
	for (int a = 1; a <= 10; a++)
	{
		if (a % 7 == 0)
			//break;
			continue; //아래문장으로  내려가지 않고 다시 반복문의 조건으로 올라가서 조건을 확인하고 반복
		printf("%d\n", a);
	}
		
}