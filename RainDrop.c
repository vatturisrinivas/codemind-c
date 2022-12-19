#include<stdio.h>
int main()
{
    int a,i,c=0,d=0,e=0,f=0;
    scanf("%d",&a);
    for(int i=1;i<=3;i++)
    {
        if(a%3==0&&c==0)
        {
            printf("Pling");
            c++;
        }
        else if(a%5==0&&d==0)
        {
            printf("Plang");
            d++;
        }
        else if(a%7==0&&e==0)
        {
            printf("Plong");
            e++;
        }
    }
    if(d==0&&e==0&&c==0)
    {
        printf("%d",a);
    }
}