#include <stdio.h>

int y;
int arr[3];

int main(){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 4; x++){
            scanf("%d", &y);
            if(y == 0){
                arr[i]++;
            }
        }
    }
    for(int v = 0; v < 3; v++){
        switch(arr[v]){
            case 0:
                printf("E\n");
                break;
            case 1:
                printf("A\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("C\n");
                break;
            default:
                printf("D\n");
                break;
        }
    }
    return 0;
}