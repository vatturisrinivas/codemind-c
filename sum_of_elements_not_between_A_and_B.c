#include<stdio.h>
int main()
{
    int n,i,a,b,c=0;
    int f[n];
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        scanf("%d",&f[i]);
    }
    scanf("%d%d",&a,&b); 
    for(i=1;i<=n;i++)
    {
        if(f[i]<a) 
        {
            c=c+f[i];
        }
        else if(f[i]>b)
        {
            c=c+f[i]; 
            
        } 
        
    } 
    printf("%d",c);
    
}