#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y);
void sub(int i, int y);
void arr_prn(int d[5]);

int main(void)
{
    int a = 10;
    int b = 20;
    int c[5] = {1, 2, 3, 4, 5};

    int q = add(a,b);  //함수호출, 인수 2개 -> 더할라고


    sub(a, b);
    printf("%d\n", q);
    arr_prn(c);
    return 0;
}

int add(int x, int y) //매개변수 형을 선언
{
    int k = x + y;
    return k; //30반환
}
void sub(int i, int y)
{
    int t = i - y;
    printf("%d", t);
}
void arr_prn(int d[5])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", d[i]);
    }
}