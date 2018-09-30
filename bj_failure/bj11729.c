#include <stdio.h>
int N, Cnt;
int Process[2000000][2];
void DivConq(int n, int from, int to)
{
	int mid = 6 - from - to;
	
	if(n == 1)
	{
		Process[Cnt][0] = from;
		Process[Cnt][1] = to;
		Cnt += 1;
	}
	else
	{
	  	DivConq(n - 1, from, mid);
	    // DivConq(1, from, to)를 불필요하게 호출할 필요없다.
		Process[Cnt][0] = from;		
	    Process[Cnt][1] = to;
	    Cnt += 1;
    	DivConq(n - 1, mid, to);  
	}
}
int main() {
	scanf("%d", &N);
	
	DivConq(N, 1, 3);
	
	printf("%d\n", Cnt);
	for(int i = 0; i < Cnt; i++)
		printf("%d %d\n", Process[i][0], Process[i][1]);
	return 0;
}
