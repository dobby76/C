#include <stdio.h>

int main(void)
{
    int a, b;

    for(a = 1; a <= 3 ; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            printf("%d\t%d\n", a, b);
        }

    }
    //int a = 1, b;

    //while (a <= 3)
    //{
    //    b = 1;
    //    while (b <= 3)
    //    {
    //        printf("%d\t%d\n", a, b);
    //        b++;
    //    }
    //    a++;
    //}

    return 0;
}