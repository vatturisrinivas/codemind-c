#include<stdio.h>
int pal(int y)
{
    int d=0,g,r;
    g=y;
    while(g)
    {
        r=g%10;
        d=d*10+r;
        g/=10;
    }
    if(d==y)
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
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}