#include<stdio.h>
int main()
{
    int a,b,c,i,j,cc=0;
    scanf("%d",&a);
    for(i=36;i<=a;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",j-1);
            cc++;
           
        }
    }
    printf("
");
    printf("Total=%d",cc);
}