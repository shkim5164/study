// 포인터변수

// int * p
// * p => 주소값과 같은 주소의 값
// p => 주소값 &a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int arr[4];
    int user[4];
    int input;
    
    // 1. 4자리 발생 및 하나는 4자리 입력받아야 함.
    for(int i = 0; i < 4; i++){
        int a = rand() % 9;
        for(int z = 0 ; z < 4; z++){
            while(1){
                if(arr[z] == '\0' || arr[z] != a){
                    arr[i] = a;
                    break;
                }
                else{
                    break;
                }
            }
        }
    }
    // 2. 4자리가 중복인지 검사 -> 아니면, 다시 출력
    for(int b = 0; b < 4; b++){
        scanf("%d", &input);
        for(int z = 0 ; z < 4; z++){
            while(1){
                if(user[z] == '\0' || user[z] != input){
                    user[b] = input;
                    break;
                }
                else{
                    break;
                }
            }
        }
    }
    // 3. 야구게임.
    int strike = 0;
    int ball = 0;
    for(int v = 0; v < 4; v++){
        int cnt;
        if(arr[v] == user[v]){
            strike += 1;
        }
        else{
            ball += 1;
        }
    }
    if(ball == 4){
            
            printf("No!");
        }
        else if(strike == 4){
            printf("OK!");
        }
        else{
            printf("%dS %dB", strike, ball);
        }
    for(int n = 0; n < 4; n++){
        printf("%d", arr[n]);
    }
    return 0;
}


// int gumsa(int x){
//     for(int i = 0; i < 4; i++){
//         int b = x / 10
//         x % 10 =
//     }
// }
