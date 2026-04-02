#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_even(int ar[10]);
void print_cnt(int r); 

int main(void)
{
    int res;
    int ar[10]; //10개의 배열(0 ~ 9)
    printf("정수 10개 입력: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    res = count_even(ar); //함수호출 
    print_cnt(res); //함수호출
    return 0;
}

//함수 정의

int count_even(int ar[10])
{
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if(ar[i] % 2 == 0)
        {
            cnt ++; //짝수면 1증가
        }
    }
    return cnt; //반환되는 값(짝수 개수)
}

void print_cnt(int r)//매개변수 정수형 res -> r
{
    printf("개수는: %d", r);
}