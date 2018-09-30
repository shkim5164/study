#include <stdio.h>
#include<math.h>
int N;
int t=0;
int r;
int c;
void rec(int N, int r, int c)
{if(N=1)
 {if(r==1 && c==1)
  {t = t+1;
   printf("%d", t);
  }
  if(r==1 && c==2)
   {
   t = t+2;
    printf("%d", t);
   }
   if(r==2 && c==1)
   {t = t+3;
    printf("%d", t);
   }
   if(r==2 && c==2)
   {t = t+4;
    printf("%d", t);
   }
 }
   else
   { t = t+pow(2,N-1);
       rec(N-1, r-pow(2,(N-2)) , c-pow(2,(N-2)));
   }
    
}
int main()
{
    scanf("%d",&N);
    rec(N,3,3);
}