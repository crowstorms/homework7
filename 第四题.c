#include<stdio.h>
main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(k=0;k<2*n-1;k++)
  { if(k<n)
    {i=k;
	 for(j=0;j<2*(n-i)-2;j++) printf(" ");
     for(j=i-1;j<i;j++) if(i==0) printf("%c",'Z'-k%26); else printf("%c",'Z'-(2*k-1)%26);
     for(j=0;j<3+4*(i-1);j++) printf(" ");
     for(j=i+1;j>i;j--) if(i!=0) printf("%c",'Z'-(2*k)%26);
     printf("\n");
	}
	else 
	{i=2*n-2-k;
	 for(j=0;j<2*(n-i)-2;j++) printf(" ");
     for(j=i-1;j<i;j++) if(i==0) printf("%c",'Z'-(2*k-1)%26); else printf("%c",'Z'-(2*k-1)%26);
     for(j=0;j<3+4*(i-1);j++) printf(" ");
     for(j=i+1;j>i;j--) if(i!=0) printf("%c",'Z'-(2*k)%26);
     printf("\n");
	}
  }	
}

/*
Z
Y000X
W0000000V
U00000000000T


                    Z                           0
                  Y   X                         1
                W       V
              U           T
            S               R
          Q                   P
        O                       N
      M                           L
    K                               J
  I                                   H
G                                       F

*/
