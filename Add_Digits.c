#include<stdio.h>
int
add(int x)
{
    int r, s=0; 
    while(x) 
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    return s;
    
}
int main()
{
    int a; 
    scanf("%d",&a); 
    while(a>9)
    {
        a=add(a);
    }
    printf("%d",a);
    
}