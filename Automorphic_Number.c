#include<stdio.h>
int main()
{
    int a,f,i=1; 
    scanf("%d",&a);
    int t=a;
    while(t) 
    {
        i*=10;
        t/=10;
    }
    f=a*a; 
    if(f%i==a)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number"); 
    }
    
}