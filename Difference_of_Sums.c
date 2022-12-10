#include<stdio.h>
int main()
{
    int a,i,s=0,g,k=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+i*i;
        k=k+i;
    }
    g=k*k;
    printf("%d",g-s);
}