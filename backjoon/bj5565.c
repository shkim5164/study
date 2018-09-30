#include <stdio.h>

int main(){
    int all, x;
    scanf("%d", &all);
    for(int i = 0; i < 9; i++){
        scanf("%d", &x);
        all = all - x;
    }
    printf("%d", all);
    return 0;
}