#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0||a%10==0)
    {
        if(a%10==0)
        {
            printf("%d",a/10);
        }
        else
        {
            printf("%d",(a/10)+1);
        }
    }
    else
    {
        printf("%d",-1);
    }
}