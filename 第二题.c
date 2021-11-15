#include<stdio.h>
int f(int n)
{  int x,y;
   x=0;
   y=n;
   while(n)
    {x=x*10+n%10;//321 1 32    12 3   123 0
     n=n/10;
    }
   return y==x;
}
main()
{   int i,k,n,s;
    s=0;
    k=0;
	scanf("%d",&n);
	for(i=0;k<=n;i++) 
	  if(f(i))
	  {s+=i;
	   k++; 
	  }
	printf("%d",s); 
}
