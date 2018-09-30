#include <stdio.h>
int kilo;
int cnt = 0;

int main(){
    
    scanf("%d", &kilo);
    while(kilo > 0){
        if(kilo % 5 == 0){
            kilo = kilo - 5;
            cnt+=1;
        }
        else if(kilo % 3 == 0){
            kilo = kilo - 3;
            cnt+=1;
        }
        else if(kilo > 5){
            kilo = kilo - 5;
            cnt+=1;
        }
        else{
            cnt = -1;
            break;
            
        }
    }
    printf("%d", cnt);
    
}