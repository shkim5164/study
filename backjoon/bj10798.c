#include <stdio.h>
#include <string.h>

char arr[5][15];

int main(){
    for(int a = 0; a < 5; a++){
        for(int b = 0; b < 15; b++){
            char i;
            scanf("%c", &i);
            if(i == '\n'){
                break;
            }
            arr[a][b] = i;
            //fgets(arr[a], sizeof(arr[a]), stdin);
            // if(arr[a][strlen(arr[a]) - 1] == '\n'){
            //     arr[a][strlen(arr[a]) - 1] = '\0';
            //     break;
            // }
        }
    }
    for(int x = 0; x < 15; x++){
        for(int y = 0; y < 5; y++){
            //if(arr[y][x] == NULL)
			//	continue;
			//else
            printf("%c", arr[y][x]);    
        }
    }
    return 0;
}