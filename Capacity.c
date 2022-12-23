#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    printf("%d KB",(2*s*t*b*512)/1024);
}