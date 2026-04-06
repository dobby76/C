#include <stdio.h>
// void change(int* p)
// {
//     int b = 20;
//     p = &b;
// }

// int main()
// {
//     int a = 10;
//     int* p = &a;

//     change(p); //포인터여도 주소값 복사(값 전달, call by value)
    
//     printf("%d\n", *p); //10
// }
void change(int** pp)
{
    int b = 20;
    *pp = &b;
}

int main()
{
    int a = 10;
    int* p = &a;

    change(&p); //포인터여도 주소값 복사(값 전달, call by value)
    
    printf("%d\n", *p); //20
}