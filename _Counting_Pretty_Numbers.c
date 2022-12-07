#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int n,m,c=0,j;
        scanf("%d%d",&n,&m);
        for(j=n;j<=m;j++)
        {
            int k=j%10;
            if(k==2||k==3||k==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}