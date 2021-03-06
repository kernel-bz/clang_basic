/**
    file name:  ch07/function_01/main.c
    author:     Jung-JaeJoon(rgbi3307@nate.com)
    기능:        함수 만들기
*/
#include <stdio.h>
#include <stdlib.h>

///함수 fn_calc을 만듭니다.
float fn_calc(float a, char opr, float b)
{
    float result;

    if (opr == '+') result = a + b;
    else if (opr == '-') result = a - b;
    else if (opr == '*') result = a * b;
    else if (opr == '/') result = a / b;
    else {
        printf("opr 입력한 것에 오류가 있습니다.\n");
        return 0;   ///프로그램 종료
    }
    return result;
}

int main()
{
    float a, b;   ///연산대상 데이터
    float result;
    char opr;   ///연산자(+, -, *, /)
retry:
    printf("첫번째 연산 숫자를 입력 하세요:");
    scanf("%f", &a);    ///a에 정수(%d) 입력
    fflush(stdin);      ///__fpurge(stdin); 리눅스에서만, stdin은 키보드 장치번호

    printf("연산자(+,-,*,/)를 입력 하세요:");
    scanf("%c", &opr);  ///opr에 연산자 문자 입력

    printf("두번째 연산 숫자를 입력 하세요:");
    scanf("%f", &b);

    result = fn_calc(a, opr, b);

    printf("%f %c %f == %f\n", a, opr, b, result); ///입력받은 변수값들 출력

    /**
    if (result == 0) return 0;
    else goto retry;
    */
    if (result != 0) goto retry;
    return 0;
}
