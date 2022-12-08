#include<stdio.h>
int factorial(int x)
{
    int c=1,r;
    while(x)
    {
        c=c*x;
        x-=1;
    }
    printf("%d
",c);
    return 0;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        factorial(b);
    }
}