#include<stdio.h>
int add(int x)
{
    int r,s=0; 
    while(x)
    {
        r=x%10;
        s=s+r;
        x/=10;
    }
    x=s;
    return x;
    
}
int main()
{
    int a;
    scanf("%d",&a);
    while(a/10!=0)
    {
        a=add(a); 
        
    } 
    printf("%d",a);
    
}