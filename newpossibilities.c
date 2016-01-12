#include <stdio.h>
int main(void)
{
	int a[10],i,n,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		for(j=i+1;j<n;j++)
		{
			if((j>i)||(j<i))
			{
				printf("%d %d\n",a[i],a[j]);
			}
		}
	}
	return 0;
}
