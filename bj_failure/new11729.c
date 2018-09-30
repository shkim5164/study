#include <stdio.h>

int num;
int count = 0;
int process[10000][2];

int hanoi(int n, int from, int to){
    int mid = 6 - from - to;
    if(n == 1){
        process[count][0] = from;
        process[count][1] = to;
        count += 1;
    }
    else{
        hanoi(n-1, from, mid);
        hanoi(1, from, to);
        hanoi(n-1, mid, to)
    
    printf("%d\n", count);
    for(int i = 0; i < count; i++){
        printf("%d %d\n", process[i][0], process[i][1]);
    }
    
}
