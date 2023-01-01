#include<stdio.h>
int main()
{
	int n,t,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<(n-1);j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i-1]>a[i])
			{
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
		}
	}
	int m=(n/2)-1;
	printf("%d",a[m]);
}