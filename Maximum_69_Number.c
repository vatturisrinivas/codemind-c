#include<stdio.h>
int main()
{
    int a,r,c=0,i;
    scanf("%d",&a);
    int t=a;
    while(t)
    {
        c++;
        t/=10;
    }
    int m[c];
    for(i=c;i>=1;i--)
    {
        r=a%10;
        m[i]=r;
        a/=10;
    }
    for(i=1;i<=c;i++)
    {
        if(m[i]==6)
        {
            m[i]=9;
            break;
        }
    }
    for(i=1;i<=c;i++)
    {
        printf("%d",m[i]);
    }
}