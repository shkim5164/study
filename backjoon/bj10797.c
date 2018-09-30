#include <stdio.h>

int day;
int a;
int i;
int cnt;

int main(){
    scanf("%d", &day );
    cnt = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &a);
        if(day == a)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}