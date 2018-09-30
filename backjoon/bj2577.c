#include <stdio.h>

int all = 1;
int a;
int arr[10] = {0};

int main(){
    for(int i = 0 ; i < 3; i++){
        scanf("%d", &a);
        all = all * a;
    }
    
    while(1){
        int n = all % 10;
        arr[n]+=1;
        all = all / 10;
        if(all/10 == 0){
            int a = all % 10;
            arr[a]+=1;
            break;
        };
    }

    for(int i=0;i<10;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}