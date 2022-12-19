#include<stdio.h>
int main()
{
    int a,i=0,r;
    int w[a];
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        w[i]=r;
        i++;
        a/=10;
    }
    int m=0,j;
    for(j=0;j<i;j++)
    {
        if(w[j]>m)
        {
            m=w[j];
        }
    }
    printf("%d",m);
}