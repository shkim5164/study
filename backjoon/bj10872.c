#include <stdio.h>
// 1. 반복문으로 팩토리얼 짜기
int main(){
    int a;
    int b = 1;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        b = b * i;
    }
    printf("%d", b);   
    return 0;
}

// 2. 재귀함수로 팩토리얼 짜기

int recursive(int a){
    if(a == 1){
        return 1;
    }
    else{
        return a * recursive(a-1);
    }

};

int main(){
    printf("%d", recursive(10));
    return 0;
};