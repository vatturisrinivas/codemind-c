#include<stdio.h>
int main()
{
    int a,e=0,o=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        if(r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        a/=10;
    }
    if(e>0&&o==0)
    {
        printf("Even");
    }
    else if(o>0&&e==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}