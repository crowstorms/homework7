#include<stdio.h>
int f(int n)
{  int x,y,k;
   x=0;
   y=n;
   k=0;
   while(n)
   {  if (n%10==9) k++;
      if(k==2) return 1;
      n=n/10;
   }
};
main()
{  int i,s,k,n;
   scanf("%d",&n);
   k=0;
   s=0;
   for(i=1;k<n;i++)
     if(f(i))
     {  s+=i;
        k++;
	 }
	printf("%d",s); 
}

