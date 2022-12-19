#include<stdio.h>
int rev(int x)
{
    int r,s=0; 
    while(x)
    { 
        r=x%10;
        s=s*10+r;
        x/=10;
    }
    return s;
    
}
int main()
{
    int a,sqa,sqb,c;
    scanf("%d",&a);
    sqa=a*a;
    int b=rev(a);
    sqb=b*b;
    c=rev(sqb);
    if(c==sqa)
    { 
        printf("True");
    }
    else
    { 
        printf("False");
    } 
    
}