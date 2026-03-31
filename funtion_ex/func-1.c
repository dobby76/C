#include<stdio.h>

int Add(int a,int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(){
    int a, b, result;
    Intro(); //Intro 함수를 호출(참조 호출)
    a = Input(); //Input 함수를 호출, 값을 입력받는다, 7로 가정한다.
    b = Input(); //Input 함수를 호출, 값을 입력받는다, 8로 가정한다
    result = Add(a, b); //Add 함수를 호출, 7과 8을 보낸다. (값 호출)
    Result_Print(result); //Result_Print 함수를 호출, 15를 보낸다.
    return 0;

}

void Intro(void) {
    printf("****** STAR ****** \n");
    printf("두 개의 정수 입력: \n"); //출력하고 main() 함수의 Intro()로 돌아간다.
}

int Input(void) {
    int input;
    scnaf("%d", &input); //첫 번째 호출에는 7 입력하고 두 번째는 8 입력한다.
    return input; // 입력한 값을 main() 함수의 Input()으로 보낸다.
}

int Add(int i, int j) {
    return i+j; //7과 8을 더한 결과 15를 main() 함수의 Add(a, b)로 보낸다.
}

void Result_Print(int val) {
    printf("덧셈에 대한 결과 %d \n",val);
    printf("****** END ******");
}