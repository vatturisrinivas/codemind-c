#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b&&a<=c)
        {
            printf("Take second dose now
");
        }
        else if(a<b)
        {
            printf("Too Early
");
        }
        else if(a>c)
        {
            printf("Too Late
");
        }
    }
}