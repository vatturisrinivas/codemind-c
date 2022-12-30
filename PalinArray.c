#include<stdio.h>
int pal(int x)
{
    int r,s=0;
    int t=x;
    while(t)
    {
        r=t%10;
        s=s*10+r;
        t/=10;
    }
    if(s==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(pal(a[i]))
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}