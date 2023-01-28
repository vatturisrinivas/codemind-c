#include<stdio.h>
int main()
{
    int a,s=0,p=1,r;
    scanf("%d",&a); 
    while(a)
    {
        r=a%10;
        s+=r;
        p*=r;
        a/=10;
    }
    printf("%d",p-s);
    
}