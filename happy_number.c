#include<stdio.h>
int sum(int x)
{
    int s=0,r;
    while(x)
    {
        r=x%10;
        s=s+(r*r);
        x/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    while(a>9)
    {
        a=sum(a);
    }
    if(a==1||a==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}