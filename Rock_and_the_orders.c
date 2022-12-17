#include<stdio.h>
int main()
{
    int d,c;
    int a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    int sum1=a1+a2+a3;
    int sum2=b1+b2+b3;
    int sum1withdel=sum1+d;
    int sum2withdel=sum2+d;
    int sum1withc=sum1+c;
    int sum2withc=sum2+c;
    
    if (((sum1withc+sum2)<(sum1withdel+sum2withdel))&&sum2>=150)
    {
      printf("YES");
    }
    else if((sum1withc+sum2withdel)<(sum1withdel+sum2withdel)&&sum1>=150)
       {
        printf("YES");
       }
    else if (((sum1withdel+sum2withc)<(sum1withdel+sum2withdel))&&sum2>=150)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    

return 0;
}