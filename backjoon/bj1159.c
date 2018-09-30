#include <stdio.h>

int num;
char name[30];

int main(){
    // 1. num = >출전가능한 선수 입력
        scanf("%d", &num);
    // 2. c가 char를 아스키로 바꿔주는 것을 이용.
    // alpha라는 배열 생성, 저장하는 것은 'a'부터 몇번째인지, 그리고 몇번 나오는지
    // {0}은 배열은 0으로 초기화시킴.
        int alpha[26] = {0};
    // 3. 다음 N개줄에 선수이름 입력
        for(int i = 0; i < num; i++){
            scanf("%s", name);
            // 3. 성만 뽑아서 아스키코드로 계산 및 몇번째인지 계산 후 alpha배열에 +1 후 저장.
            alpha[name[0]-'a'] += 1;
        }
        // 4. alpha 배열을 다시 돌며, 5이상인 아이를 출력
        int flag = 1;
        
        for(int i = 0; i < 26; i++){
            if(alpha[i] > 4){
                printf("%c", i + 'a');
                flag = 0;
            }
            
        }
        if(flag){
            printf("PREDAJA\n");
        }
}