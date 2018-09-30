#include <stdio.h>

// 큐 문제
// 제일 뒤에 값을 넣고
// 제일 앞 것을 뺴내고
// 버린것을 따로 저장 혹은 바로 출력
int bag[3];

int insert(int a){
	
	if(bag[0] == NULL){
		bag[0] = a;
	}
	else if(bag[0] != NULL && bag[1] == NULL){
		bag[1] = bag[0];
		bag[0] = a;
	}
	else if(bag[0] != NULL && bag[1] != NULL && bag[2] == NULL){
		bag[2] = bag[1];
		bag[1] = bag[0];
		bag[0] = a;
	}
	else{
		bag[2] = bag[1];
		bag[1] = bag[0];
		bag[0] = a;
	}
	
	return 0;
}

int main() {
		int input;
		scanf("%d", input);
		int sw = 1;
		for(int i = 0; i < 3; i++){
			if(bag[i] == input){
				sw = 0;
			}
		}
		if(sw){
			insert(input);
		}
		else{
			printf("%d\n", bag[2]);
			insert(input);
		}
	return 0;
}