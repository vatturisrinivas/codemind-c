#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        printf("%d
",(b*5)+(c*7));
    }
}