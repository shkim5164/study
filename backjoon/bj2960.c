#include <stdio.h>

int main(){
    int n, k;
    int cnt = 0;
    int ans = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n];
    for(int y = 0 ; y < n; y++){
        arr[y] = 0;
    }
    int min = 2;
    for(int i = 2; i <= n; i++){
        int g = n / min;
        for (int x = 1; x <= g; x++){
            if(arr[x*g] == 0){
                arr[x*g] = 1;
                cnt+=1;
            }
            while(arr[min] == 1){
                min+=1;
            }
            if(cnt == k){
                ans = x*g;
                break;
            }
        }
        if(cnt == k){
            break;
        }
    }
    printf("%d", ans);
    printf("%d", cnt);
    
}