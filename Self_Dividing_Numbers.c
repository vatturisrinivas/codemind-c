#include<stdio.h>
int main()
{
    int a,b,r,t,c=0,cc=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        t=i;
        c=0;
        cc=0;
        while(t)
        {
            cc++;
            r=t%10;
            if(r!=0&&i%r==0)
            {
                c++;
            }
            t/=10;
        }
        if(c==cc)
        {
            printf("%d ",i);
        }
    }
}