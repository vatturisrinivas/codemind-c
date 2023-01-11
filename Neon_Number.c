#include<stdio.h>
int main()
{
    int a,s,su=0,r;
    scanf("%d",&a);
    s=a*a;
    while(s) 
    {
        r=s%10; 
        su+=r; 
        s/=10;
    }
    if(su==a) 
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}