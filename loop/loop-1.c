#include <stdio.h>

int main(void)
{
	int a = 1, b = 0;
	
	/*for (a = 1; a <= 10; a += 2)
	{
		b += a;
	}
	printf("%d", b);*/

    while (a < 11)
    {
        if (a % 2 != 0)
        {
            b += a;
        }
       
        a++;          
    }

    printf("a는: %d\t합은: %d", a, b);

}