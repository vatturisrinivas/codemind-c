#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,s=0,r,t;
        scanf("%d",&a);
        t=a;
        while(a)
        {
            r=a%10;
            s=s*10+r;
            a/=10;
        }
        if(t==s)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}