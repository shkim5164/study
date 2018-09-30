#include <stdio.h>

int month;
int day;

int yoil(int a){
    int n = a % 7;
    if(n == 1){
        printf("MON");
    }
    else if (n==2){
        printf("TUE");
    }
    else if (n==3){
        printf("WED");
    }
    else if (n==4){
        printf("THU");
    }
    else if (n==5){
        printf("FRI");
    }
    else if (n==6){
        printf("SAT");
    }
    else{
        printf("SUN");
    };
    
    return 0;
}
// 1, 3, 5, 7, 8, 10 ,12 => 31
// 4, 6, 9, 11 => 30

int main(){
    
    scanf("%d %d", &month, &day);
    if(month == 1){
        day = day + 0;
        yoil(day);
    }
    else if(month == 2){
        day = day + 31;
        yoil(day);
    }
    else if(month == 3){
        day = day + 59;
        yoil(day);
    }
    else if(month == 4){
        day = day + 90;
        yoil(day);
    }
    else if(month == 5){
        day = day + 120;
        yoil(day);
    }
    else if(month == 6){
        day = day + 151;
        yoil(day);
    }
    else if(month == 7){
        day = day + 181;
        yoil(day);
    }
    else if(month == 8){
        day = day + 212;
        yoil(day);
    }
    else if(month == 9){
        day = day + 243;
        yoil(day);
    }
    else if(month == 10){
        day = day + 273;
        yoil(day);
    }
    else if(month == 11){
        day = day + 304;
        yoil(day);
    }
    else{
        day = day + 334;
        yoil(day);
    };
    
    return 0;
};

