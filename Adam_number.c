#include<stdio.h>
int rev(int x)
{
    int r,s=0;
    while(x)
    {
        r=x%10;
        s=s*10+r;
        x/=10;
    }
    return s;
}
int main()
{
    int a,s1,s2,r,r1;
    scanf("%d",&a);
    s1=a*a;
    r=rev(a);
    s2=r*r;
    r1=rev(s2);
    if(r1==s1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}