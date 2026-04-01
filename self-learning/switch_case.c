#include <stdio.h>

int main()
{
    int a = 4;
    switch(a)
    {
    case 5:
        printf("A");
        
    case 3:
        printf("B");
    case 1:
        printf("C");
    default:
        printf("D");
    }
}