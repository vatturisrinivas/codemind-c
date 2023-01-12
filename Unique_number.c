#include<stdio.h>
int main()
{
    int n,k=0,i=0,j,c=0;
    scanf("%d",&n); 
    int a[n];
    while(n)
    {
        a[k]=n%10;
        k++; 
        n=n/10;
    }
    while(i!=k)
    {
        int j=0;
        while(j!=k)
        {
            if(i!=j) 
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            } 
            j++;
        }
        if(c>0)
        {
            break;
        }
        i++;
    }
    if(c>0)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
    
}