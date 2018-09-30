#include <stdio.h>
#include <stdlib.h>

char *input;
int ans = 0 ;

int main(){
    scanf("%s", input);
    int h = 1;
    
     if(input[0] == '-'){
        int a = sizeof(input);
    //printf("%d", a);    
        
        for(int i = a - 1; i > 0; i--){
            ans = ans + (atoi(&input[i]) * h);
            h = h *10;
            
        }
        printf("%d", 0 - ans);
     }
     else{
        int a = sizeof(input);
        for(int i = a - 1; i >= 0; i--){
            ans = ans + (atoi(&input[i]) * h);
            h = h *10;
        }
        printf("%d", ans);
     }
}


