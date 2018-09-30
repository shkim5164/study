#include <stdio.h>

int main(){
    int n;
    int cute = 0;
    int nocute = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        if(a == 1){
            cute+=1;
        }
        else{
            nocute+=1;
        }
    }
    if(cute > nocute){
        printf("Junhee is cute!");
    }
    else{
        printf("Junhee is not cute!");
    }
    
    
}