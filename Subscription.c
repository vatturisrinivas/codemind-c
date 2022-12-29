#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        if(b>=50)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}