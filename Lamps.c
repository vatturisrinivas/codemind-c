#include<stdio.h>
int main()
{
    int n,k,x,y,j,l;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    j=k*x;
    if(x<y)
    {
        l=(n-k)*x;
    }
    else
    {
        l=(n-k)*y;
    }
    printf("%d",j+l);
}