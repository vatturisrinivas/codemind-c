#include<stdio.h>
int main()
{
    int a,f=1,i,s=0,r;
    scanf("%d",&a);
    int t=a;
    while(t)
    {
        f=1;
        r=t%10;
        for(int i=1;i<=r;i++)
        {
            f*=i;
        }
        s+=f;
        t/=10;
    }
    if(s==a)
    {
        printf("The number %d is a strong number",a);
    }
    else
    {
        printf("The number %d is not a strong number",a);
    }
}