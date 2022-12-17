#include<stdio.h>
int main()
{
    int a,r,p=1,s=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        s=s+r;
        p=p*r;
        a=a/10;
    }
    printf("%d",p-s);
}