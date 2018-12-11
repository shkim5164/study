#include <stdio.h>

int n, m, a, b;
int count = 0;
int arr[500][10000] = {0, };
int new[10000] = {0, };

int main(){
    // 2차배열로 풀자
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for(int i = 2; i < 10000; i++){
        if(arr[1][i] == 1){
            new[i] = 1;
            count += 1;
        }
    }
    for(int i = 0; i < 10000; i++){
        if(new[i] == 1){
            for(int j = i; j < 10000; j++){
                if(arr[i][j] == 1){
                    count+=1;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}