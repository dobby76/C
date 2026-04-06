//포인터의 증감 연산 (Increment / Decrement)

#include <stdio.h>

int main(void)
{
    int i = 10;
    int* pi = &i; //i주소를 포인터변수 pi줌, pi는 i의 주소를 가르킴

    printf("i = %d, pi = %p\n", i, pi); //%p는 주소 지정자, 
    //메모리 주소는 2진수(16진수로 보여줌)

    (*pi)++; //pi가 가리키는 위치의 값을 증가한다. 
    //()먼저 -> *pi->가르키는 주소의 값_>++: 값을 1증가, 주소 그대로
    printf("i = %d, pi = %p\n", i, pi); //11

    pi++; //pi가 가리키는 위치에서 값을 가져온 후에 포인터 pi를 증가한다.
    //*pi -> i를 가르키는데 그 값(* 있으므로)-> 11-> ++는 주소 증가 
    printf("i = %d, pi = %p\n]", i, pi); //11

    return 0;


}