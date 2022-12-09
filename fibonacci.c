#include<stdio.h>
int main()
{
    int a,n1=0,n2=1,n3,i;
    scanf("%d",&a);
    printf("%d %d ",n1,n2);
    for(i=3;i<=a;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}