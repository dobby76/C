#include <stdio.h>
#define TAX_RATE 0.2 // 기호상수 선언
// 전처리단계에서 처리(자료형이 없음), 전범위

int main(void)
{
	const int MONTHS = 12; // 기호상수 선언
	// 컴파일러 단계에서 처리 블록안에만 유효
	int m_salary, y_salary; 

	printf("월급을 입력하시오: ");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다\n", y_salary * TAX_RATE);

	return 0;
}