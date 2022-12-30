#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<3)
        {
            printf("LIGHT
"); 
        }
        else if(a>=3&&a<7)
        {
            printf("MODERATE
");
        }
        else
        {
            printf("HEAVY
"); 
        } 
    }
}