#include <stdio.h>

int num[123457];

int search(int a){
    int count = 0;
    for(int i = a; i <= a*2; i++){
        for(int x = 1; x <= i; x++){
            if(i % x != 0){
                count++;
            }
        }
    }
    return count;
};

int main(){
    // 1. n개의 케이스 입력받기, 0이 나오면 끝이라고 암시. n개 저장.
    int cnt = 0;
    while(1){
        int input;
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        else{
            num[cnt] = search(input);
            cnt++;
        }
    };
    for(int y=0; y < cnt; y++){
            printf("%d\n", num[y]);
    };
    // 2. n 2n 사이의 소수 검색
    
    // 3. 각 갯수 출력
    return 0;
};

