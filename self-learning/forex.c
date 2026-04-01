#include <stdio.h>
int main()
{
    int a[5] = {9, 1, 7, 3, 5};
    int i, j, min, t; // i: 기준, j: 비교, min: 최솟값 인덱스, t: 임시 변수

    //선택 정렬 시작
    for(i = 0; i < 4; i++) // 0 ~ 3까지
    {
        min = i; //현재 위치를 최솟값이라고 사정

        // i + 1부터 끝까지 돌면서 최솟값 찾기
        for(j = i + 1; j < 5; j++)
        {
            if(a[j] < a[min]) // 더 작은 값 발견하면
                min = j; // 최솟값 갱신
        }
        // 찾은 최솟값을 현재 위치(i)와 교환
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    //정렬된 배열 출력
    for(i = 0; i < 5; i++)
    {
        printf("%2d", a[i]);
    }
}