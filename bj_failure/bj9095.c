#include <stdio.h>
int t;
int n;

int count3(int a){
    int cnt = 0;
    if(a <= 0){
        return 1;
    }
    else {
        if(a-3 >= 0){
            cnt += count3(a-3);
        }
        if(a-2 >= 0){
            cnt += count3(a-2);
        }
        if(a-1 >= 0){
            cnt += count3(a-1);
        }
        return cnt;
    }
}

int main(){
    scanf("%d", &t);
    int arr[t];
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        arr[i] = n;
    }
    for(int v = 0; v < t; v++){
        printf("%d\n", count3(arr[v]));
    }
    
    
    return 0;
}