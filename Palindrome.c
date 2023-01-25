#include<stdio.h>
int main()
{
    int a,s=0,r,t;
    scanf("%d",&a); 
    t=a;
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
    