#include <stdio.h>

// 1. 문자열배열 출력하기

// char arr[8] = "football";

// int main(){
//     for(int i = 0; i < 8; i++){
//         printf("%c", arr[i]);
//     }
//     return 0;
// }

// 2. #define 알기
#define k 3
#define u 3
#define ku(a, b) a-b

int main(){
    printf("%d\n", k+u);
    printf("%d\n", k*u);
    printf("%d\n", ku(k,u));
    return 0;
}