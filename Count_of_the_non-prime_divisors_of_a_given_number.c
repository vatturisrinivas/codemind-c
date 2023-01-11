#include<stdio.h>
int prime(int x)
{
    int c=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            c++; 
            
        } 
        
    }
    if(c==0) 
    {
        return 1;
    }
    else
    {
        return 0; 
        
    }
    
}
int main()
{
    int a,i,d=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++) 
    {
        if(a%i==0)
        {
            if(!prime(i)) 
            { 
                d++;
            }
        }
    }
    printf("%d",d);
    
}