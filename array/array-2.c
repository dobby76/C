#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5// 기호상수 5 -> STUDENTS
int main()
{
	int score[STUDENTS]; //5개
	int sum = 0, count = 0;
	float avg;

	for (int i = 0; i < STUDENTS; i++)
	{
		while (1)
		{
			printf("학생의 점수를 입력하세요(%d번째 입력): ", i + 1);
			scanf("%d", &score[i]);
			if (score[i] >= 0 && score[i] <= 100)
				break;

			printf("다시 입력하세요.\n");
		}
		if (score[i] != 0)
		{
			sum = score[i] + sum;
			count++;
		}
		
	}
	if (count > 0)
		avg = (float)sum / count;
	else
		avg = 0;

	printf("합계: %d\t평균: %.2f", sum, avg);

	return 0;

}