#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *one[100];
char *two[100];
//char *arr1[500000];
int cnt = 0;

int main(){
    char tmp[20];
    int a;
    int b;
    int len;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < a; i++){
        scanf("%s", tmp);
        len = strlen(tmp) + 1;
        //printf("%d\n", len);
        one[i] = (char *)malloc(sizeof(char) * len);
        strcpy(one[i], tmp);
    }
    for(int k = 0; k < b; k++){
        scanf("%s", tmp);
        for(int j = 0; j < a; j++){
            if(strcmp(one[j], tmp) == 0){
                cnt = cnt + 1;
                len = strlen(tmp) + 1;
 
                two[j] = (char *)malloc(sizeof(char) * len);
                strcpy(two[j], tmp);
            }
        }    
    }
    
    for(int m = 0; m < b; m++){
        int index = m;
        for(int n = m; n < b; n++){
            if(strcmp(two[n], two[index]) < 0){
                index = n;
            }
            strcpy(tmp, two[m]);
            strcpy(two[m], two[index]);
            strcpy(two[index], tmp);    
        }
    }
    
    printf("%d\n", cnt);
    for(int b = 0; b < cnt; b++){
        printf("%s\n", two[b]);
    }
    
}