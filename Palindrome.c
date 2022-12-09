#include<stdio.h>
int main()
{
    int a,t,r,s=0;
    scanf("%d",&a);
    t=a;
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}