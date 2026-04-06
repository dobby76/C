#include <stdio.h>

void ap1() //배열과 주소
{
    int i[5] = {1,2,3,4,5}; //32비트의 정수형 저장 공간(0 ~ 4개) 5개
    printf("%d\n\n", i[0]); //i[0] 저장 공간의 값
    printf("%d\n\n", i); //i 배열 이름은 주소다, 주소 출력
    printf("%d\n\n", &i); //i 배열주소와 일치
    printf("%d\n\n", &i[0]); //i 배열주소와 일치
    //i == &i[0] //배열이름은 배열의 0번지 주소

    printf("%p\n\n", &i[1]); 
    printf("%p\n\n", i + 1); //&i[1]와 동일, int 하나크기(4바이트)이동
    printf("%p\n\n", &i[2]);
    printf("%p\n\n", i + 2); //&i[2]와 동일
    
}

void ap2() //포인터 처럼 배열 사용
{
    int a[4];
    *a = 111;      //a[0] = 111
    *(a + 1) = 222; //a[1] = 222
    *(a + 2) = 333; //a[2] = 333
    *(a + 3) = 444; //a[3] = 444
    printf("%d\n\n", *a); //a[0] 값 출력
    printf("%d\n\n", *(a + 1)); //a[1]
    printf("%d\n\n", *(a + 2)); //a[2]
    printf("%d\n\n", *(a + 3)); //a[3]
    //a[2] = *(a +2)
}

int main()
{
    ap1(); //함수 호출
    ap2(); //함수 호출
    
    
    return 0;
}