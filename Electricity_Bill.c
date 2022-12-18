#include<stdio.h>
int main()
{
    float u,c,s,t,b;
    scanf("%f",&u);
    if(u<200)
    {
        c=1.20;
        b=u*c;
        s=0;
        t=b;
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        b=u*c;
        s=0;
        t=b;
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        b=u*c;
        s=0.15*b;
        t=b+s;
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
        b=u*c;
        s=0.15*b;
        t=b+s;
    }
    else
    {
        c=2.00;
        b=u*c;
        s=0.15*b;
        t=b+s;
    }
    printf("Units Consumed: %.f
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f
",t);
}