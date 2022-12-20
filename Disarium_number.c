#include<stdio.h>
#include<math.h>
int main()
{
    int a,s=0,r,l=0;
    scanf("%d",&a);
    int t=a;
    int d=a;
    while(t)
    {
        l++;
        t/=10;
    }
    while(a)
    {
        r=a%10;
        s+=pow(r,l);
        l--;
        a/=10;
    }
    if(s==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}