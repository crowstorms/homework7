#include<stdio.h>
main()
{
	int sum,a[10],n,i,j,k,l,m,b[3000];
	k=0;
	l=0;
	sum=0;
	scanf("%d",&n);
	for(i=99;i<100000;i++)
	{ m=i;
	  for(j=0;j<10;j++)
	  {
		a[j]=m%10;
		m=m/10;
		if(a[j]==9) k++;
		if(m==0) break;
	  }
		if(k>=2) 
		{
		 b[l]=i;
		 l++;
		};
	  k=0;
	  if(l>n) break;
	}
	for(j=0;j<n;j++) sum+=b[j];
	printf("%d",sum);
}
