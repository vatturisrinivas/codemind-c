#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(z>=x&&z<y)
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