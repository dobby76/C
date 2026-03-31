#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    //int num; // 정수 선언

    //printf("출력하고 싶은 단을 입력하세요: ");
    //scanf("%d", &num); // 계산할 값을 입력 받는 입력문
    //printf("%d단\n", num);
    //for (int max = 1; max < 10; max++) // max를 1로 정의를 한 후 max의 값이 9가 될 때 까지 반복하는 반복문. 9가 되기전까지 max에 값에 1을 더한다.
    //{
    //    printf("%d * %d = %d\n", num, max, num * max); //num의 값 9까지 1씩 증가하는 max값을 출력하며 num의 값과 max의 값을 곱셈을 하여 그 결과 값을 출력하는 코드
    //}

    for (int num = 2; num <= 9; num++)   // num은 max가 다 반복이 끝나면 그때 num의 값이 1 증가
    {
        printf("%d단\n", num);

        for (int max = 1; max <= 9; max++)
        {
            printf("%d * %d = %3d\n", num, max, num * max);
        }
    }
    return 0;
}