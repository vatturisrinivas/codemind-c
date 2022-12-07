#include<stdio.h>
int main()
{
    int a,i,j,n;
    scanf("%d",&a);
    n=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("
");
        n=a-i;
    }
}