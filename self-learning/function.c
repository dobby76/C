#include <stdio.h>

int digit(int n) // 정수 n의 각각의 자리 숫자의 합을 구하는 함수
{
    if(n < 10) return n; // 한 자리 숫자이면 그대로 반환
    return (n % 10) + digit(n / 10); // 마지막 자리(n % 10) + 나머지 숫자(n / 10)에 대한 재귀 호출
}
int main() 
{
    printf("%d", digit(235)); // 5 + 3 + 2 = 10 출력
}