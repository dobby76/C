#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	printf("%d\n", answer);
	int guess;
	int try = 0;

	do {
		printf("정답을 추측해 보세요: ");
		scanf("%d", &guess);
		try++;
		if (guess > answer)
			printf("입력한 숫자가 정답보다 큽니다. \n");
		else if (guess < answer)
			printf("입력한 숫자가 정답보다 작습니다.\n");

	} while (guess != answer);

	printf("축하합니다. 시도횟수 = %d\n", try);

	return 0;
}
