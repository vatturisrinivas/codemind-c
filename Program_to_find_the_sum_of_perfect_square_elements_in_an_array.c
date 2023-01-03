#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=a[j];j++)
    {
        int sq=j*j;
        for(int i=0;i<n;i++)
        {
            if(sq==a[i])
            {
                s+=a[i];
            }
        }
    }
    printf("%d",s);
}