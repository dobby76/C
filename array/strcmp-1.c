#include <stdio.h> 
#include <string.h> 

int main(void)
{
    int res;
    char a[30];
    char b[30];

    printf("첫번째 문자열을 입력하세요: ");
    scanf("%s", a); //배열명은 배열의 첫 주소이다. 만약에 하나하나 즉 하나의 요소를 입력 받을 땐 &를 붙인다.

    printf("두번째 문자열을 입력하세요: ");
    scanf("%s", b);

    res = strcmp(a, b); //문자열 비교
    //res는 0, 음수, 양수
    if(res == 0)
    {
        printf("%s가 %s와 같습니다.\n",a ,b); //반환값이 0이면 완전히 같다.
    }
    else if(res < 0)
    {
        printf("%s가 %s보다 앞이다.\n", a, b); //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
    }
    else
    {
        printf("%s가 %s보다 뒤에 있다.", a, b); //양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
    }

	return 0;
}