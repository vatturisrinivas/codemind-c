#include<stdio.h>
int main()
{
    int a,m=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        if(m<r)
        {
            m=r;
        }
        a/=10; 
    }
    printf("%d",m);
    
}