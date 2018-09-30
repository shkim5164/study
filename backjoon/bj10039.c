#include <stdio.h>

int all = 0;
int point;

int main(){
    for(int i = 0; i < 5 ; i++){
        scanf("%d", &point);
        if(point < 45){
            point = 40;
        };
        all = all + point;
    }    
    printf("%d", all/5);
    return 0;
}