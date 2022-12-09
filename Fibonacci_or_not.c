#include<stdio.h>
int main()
{
    int a,n1=0,n2=1,n3,i,c=0;
    scanf("%d",&a);
    if(a==n1||a==n2)
    {
        printf("True");
    }
    else
    {
        
        for(i=3;i<=20;i++)
        {
            n3=n1+n2;
            if(a==n3)
            {
                c++;
            }
            n1=n2;
            n2=n3;
            if(c>0)
            {
                break;
            }
        }
        if(c>0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}