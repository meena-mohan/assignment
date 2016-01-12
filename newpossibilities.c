#include <stdio.h>
int main(void) 
{
	int a[10],i,j,n,k,l,m,n1;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
		printf("%d\n",a[k]);
	}
	for(i=2;i<=n;i++)
	{ 
	  for(j=0;j<=n-i;j++)
	  {
	       l=j+i-1;
	       for(m=l;m<n;m++)
	       {
	  	     for(n1=j;n1<l;n1++)
	  	     {
	  	     	 printf("%d ",a[n1]);
	  	     }
	             printf("%d\n",a[m]);
	       }
	  }
	}
	return 0;
}

