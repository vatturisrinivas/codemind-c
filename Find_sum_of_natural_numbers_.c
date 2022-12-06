#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        c+=i;
    }
    printf("%d",c);
}