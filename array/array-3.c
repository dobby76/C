#include <stdio.h>

void main()
{
	int a[4][3] = { {100, 200, 300}, {10}, {50, 100, 150}, {30, 40 } };
	//a[행][열] 0~2행 0~2열 -> 9개 요소 구성
	int sum = 0;
	int i, j;
	for (i = 0; i < 4; i++) //행 
	{
		for (j = 0; j < 3; j++) //열
		{
			printf("%d\t", a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
	printf("합계: %d", sum);
}