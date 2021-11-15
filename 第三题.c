#include<stdio.h>
main()
{  int i,n,j,k;
   scanf("%d",&n);
   for(k=0;k<2*n-1;k++)
   {  if(k<n) i=k;else i=2*n-2-k;
      for(j=0;j<=i;j++) printf("%c",'Z'-j%26);
      for(j=0;j<2*(n-i-1);j++) printf("%c",'Z'-i%26);
      for(j=i-1;j>=0;j--) printf("%c",'Z'-j%26);
      printf("\n");
   }
}
