// 왜 C를 공부하는가?
// 하위 기계어가 다 달라서 -> 통합해서 사용할 수 있는 것이 C다.
// 1. 변수
// 2. 상수
// 3. 연산자
// 4. 예약어 (int, if, for)
// 5. 함수 제일 중요하다.
// ex) int , void -> 로 함수는 시작한다.
// void main() , int main() -> main 에서 다른 함수로 가서 return 0으로 변하는 것이 int

// c -> 어셈블리어 -> 기계어

// 식별자 -> 대소문자가 구별된다. 그냥 변수는 소문자, 클래스나 구조체는 대문자 관례입니다.
// 숫자, 문자, 문자열 -> 숫자, '', ""
// 심볼릭 상수 -> 전역변수
// enum {} -> 

// signed vs unsigned 부호를 알려주는 것의 유무

// 2진법과 16진법 이 많이 쓰인다.
// 데이터형식 변환문자


// 입력과 출력

// 입력함수 scanf("입력양식 %d ... ", &a)
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("%s", "사용량은 ");
    printf("%d\n", a);
    
    printf("%s", "세전금액은 ");
    printf("%f", 660+(a*88.5));
    printf("%s\n", "원");
    printf("%s", "세금은 ");
    printf("%.3f", (660+(a*88.5))*0.09);
    printf("%s\n", "원");
    printf("%s", "최종금액은 ");
    printf("%f", (660+(a*88.5))*1.09);
    printf("%s\n", "원");
    //printf("%4d\n", a);
    //printf("%5d\n", a);
    //printf("%6d\n", a);
    return 0;
}