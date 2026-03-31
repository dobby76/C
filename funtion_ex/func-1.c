#include<stdio.h>

int Add(int a,int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(){ //시작
    int a, b, result;
    Intro(); //Intro 함수를 호출(참조 호출.) /()안에 인수가 없음. 함수 앞에 형이 없음. 반환되는 것이 없음.
    a = Input(); //Input 함수를 호출. 값을 입력받는다, 7로 가정한다. / 인수 없음.
    b = Input(); //Input 함수를 호출. 값을 입력받는다, 8로 가정한다. / 인수 없음.
    result = Add(a, b); //Add 함수를 호출, 7과 8을 보낸다. (값 호출)
    Result_Print(result); //Result_Print 함수를 호출, 15를 보낸다. / 인수 하나
    return 0;

}

void Intro(void) { //함수, () 안에 매개변수 없음. 반환되는 값이 없음(void)
    printf("****** STAR ****** \n"); //제목 출력 부분
    printf("두 개의 정수 입력: \n"); //출력하고 main() 함수의 Intro()로 돌아간다.
}

int Input(void) { //사용자 정의 함수, 매개변수 없음
    int input; //변수 선언
    scanf("%d", &input); //정수형 숫자 입력. 첫 번째 호출에는 7 입력하고 두 번째는 8 입력한다. 
    return input; // 입력한 값을 main() 함수의 Input()으로 보낸다.
    //int input()->int는 반환되는 값의 형 의미
}

int Add(int i, int j) { //int i, int j -> 매개변수(형 선언)
    //a -> i    b -> j
    return i+j; //더한값을 반환(int형) / 7과 8을 더한 결과 15를 main() 함수의 Add(a, b)로 보낸다.
}

void Result_Print(int val) { //result -> 매개변수 val(정수형)
    printf("덧셈에 대한 결과 %d \n",val);
    printf("****** END ******");
    //반환 없음
}