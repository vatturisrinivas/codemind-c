#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    for(int j=0;j<b;j++)
    {
        int a,i=0,r;
        scanf("%d",&a);
        int f[a];
        while(a)
        {
            r=a%10;
            f[i]=r;
            i++;
            a/=10;
        }
        int fi=f[i-1];
        int la=f[0];
        printf("%d
",fi+la);
    }
}