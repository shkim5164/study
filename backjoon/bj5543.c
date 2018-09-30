#include <stdio.h>

int main(){
    //1. 햄버거(3개)와 음료(2개)가격 따로 받기
    int ham[3];
    int bever[2];
    int hap = 4000;
    for(int i = 0; i < 3; i++){
        scanf("%d", &ham[i]);
    }
    for(int x = 0; x < 2; x++){
        scanf("%d", &bever[x]);
    }
    //2. 두개를 합쳐서 가장 작은 가격 - 50 출력
    for(int y = 0; y < 2; y++){
        for(int z = 0; z < 3; z++){
            if(hap > bever[y] + ham[z] ){
                hap = bever[y] + ham[z];
            }
        }
    }
    printf("%d", hap-50);
    return 0;
}