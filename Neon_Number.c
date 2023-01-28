#include<stdio.h>
int main()
{
    int a,r,s=0;
    scanf("%d",&a);
    int p=a*a;
    while(p) 
    {
        r=p%10;
        s+=r;
        p/=10;
    }
    if(a==s) 
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
    
}