#include <stdio.h>
void f3(); //함수원형
void f1();
void arrPrint(int k[2][3]);

void f1() //함수생성
{
	int a[2][3] = { {4, 5, 6}, {7, 8, 9} };
	//a[0][0] = 4;
	//a[0][1] = 5;
	//a[0][2] = 6;
	//a[1][0] = 7;
	//a[1][1] = 8;
	//a[1][2] = 9;
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("======================\n");
}

void f2()
{
	int b[2][3];
	int totalsize = sizeof(b);
	printf("%d\n", totalsize);
	int bsize = sizeof(b[0]);
	printf("%d\n", bsize);
	printf("%d\n", sizeof(b[0][0]));
	printf("%d\n", sizeof(b) / sizeof(b[0]));
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0]));
	printf("======================\n");

}

int main(void) //main함수 1개, 처음 시작할때 main 부터 시작
{
	//f1(); //함수는 ()소괄호가 필요함
	//f2();
	f3(); //함수호출
	return 0;
}

void f3()
{
	int a[2][3] = { {1,2,3},{4,5,6} }; // 배열 초기화 , 1, 2, 3, 4, 5, 6
	//a[0][0] = 1 [0][1] = 2 [0][2] = 3 [1][0] = 4 [1][1] = 5 [1][2] = 6w
	arrPrint(a); // 인수 보내면서 함수 호출, a배열9([2][3] 전체)을 arrPrint 함수를 호출할때 같이 보냄

	int b[2][3] = { {1}, {4} }; // 1 0 0 4 0 0 
	arrPrint(b);

	int c[2][3] = { {1, 2} }; // 1 2 0 0 0 0 
	arrPrint(c);

	int d[2][3] = { 1, 2, 3, 4, 5, 6 };
	arrPrint(d);

	int i[2][3] = { 1, 2, 3, 4 }; // 1 2 3 4 0 0
	arrPrint(i);

	int j[2][3] = { 1, 2 }; // 1 2 0 0 0 0
	arrPrint(j);

	int k[2][3] = { 0 }; // 0 0 0 0 0 0 
	arrPrint(k);

}

void arrPrint(int k[2][3]) //k를 매개변수 인수와 유형 , 개수 통일
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%2d", k[i][j]);
		}
		printf("\n");
	}
}