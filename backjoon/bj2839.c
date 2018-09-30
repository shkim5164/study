#include <stdio.h>

int kilo;

int calculate(int a){
    int cnt = 0;
    int mok = a / 5;
    int namoji = a % 5;
    int mok3 = a / 3;
    int namoji3 = a % 3;
    if(namoji == 0){
        cnt = mok;
        printf("%d\n", cnt);
    }
    else if((namoji + 5) % 3 == 0 && mok > 0){
        cnt = (mok - 1) + ((namoji + 5) / 3);
        printf("%d\n", cnt);
    }
    else {
        if(namoji % 3 == 0){
            cnt = mok + (namoji / 3);
            printf("%d\n", cnt);
        }
        else if(namoji3 % 5 == 0){
            cnt = mok3 + (namoji3 / 5);
            printf("%d\n", cnt);
        }
        else if((namoji3 + 3) % 5 == 0 && mok3 > 0){
            cnt = (mok3 - 1) + ((namoji3 + 3) / 5);
            printf("%d\n", cnt);
        }
        else{
            if(a % 3 == 0){
                cnt = cnt + (a / 3);
                printf("%d\n", cnt);
            }
            else{
                printf("%d\n", -1);
            };
        };
    }
    return 0;
    
};

int main(){
    // scanf("%d", &kilo);
    // calculate(kilo);
    for(int i = 1 ; i < 1001; i++){
        printf("%d ", i);
        calculate(i);
    }
    return 0;
};