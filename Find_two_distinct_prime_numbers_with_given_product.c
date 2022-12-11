#include<stdio.h>
int main()
{
    int a,i,j,g=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            for(j=(a-1);j>1;j--)
            {
                if(a%j==0)
                {
                    if(i*j==a)
                    {
                        printf("%d %d",i,j);
                        g++;
                    }
                }
                if(i==(j-1))
                {
                    break;
                }
            }
        }
    }
    if(g==0)
    {
        printf("-1");
    }
}