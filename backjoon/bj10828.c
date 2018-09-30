#include <stdio.h>
#include <string.h>
/* push X : 정수 X를 스택에 넣는 연산이다. */
int n;

struct Stack {
	int data[10000];
	int index = 0;
};
	
struct Stack st;

int push(struct Stack a, int b) {

	a.data[a.index] = b;
	a.index += 1;
	
	return 0;
}
/* pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다. */
int pop(struct Stack a) {

	if (a.index == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d", a.data[a.index]);
		a.index -= 1;
	}

	return 0;
}
/* size : 스택에 들어있는 정수의 개수를 출력한다. */
int size(struct Stack a) {
	printf("%d", a.index);

	return 0;
}

/* empty : 스택이 비어있으면 1, 아니면 0을 출력한다. */

int empty(struct Stack a){
	if (a.index == 0) {
		printf("%d", 1);
	}
	else {
		printf("%d", 0);
	}

	return 0;
}

/* top : 스택의 가장 위에 있는 정수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다. */

int top(struct Stack a) {
	if (a.index == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d", a.data[a.index]);
	}

	return 0;
}




int main() {
	char input[100000];
	int num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		//fgets(input, 100, stdin);
		scanf("%s", input);
		//for(int i = 0; i < 10; i++){
			//printf("%c\n", input[i]);
		//}
		if (!strcmp(input, "pop")) {
			pop(st);
		}
		else if (!strcmp(input, "empty")) {
			empty(st);
		}
		else if (!strcmp(input, "size")) {
			size(st);
		}
		else if (!strcmp(input, "top")){
			top(st);
		}
		else {
			scanf("%d", &num);
			fgetc(stdin);    //버퍼 비우기. 
			//Push(&stack, num);
			push(st, num);
		}
		//printf("%s", input);
	} 

	return 0;
}