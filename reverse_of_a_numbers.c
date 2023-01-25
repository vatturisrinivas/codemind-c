#include<stdio.h>
int main()
{
    int a,s=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10; 
        s=s*10+r;
        a=a/10;
    } 
    printf("%d",s);
    
}