#include<stdio.h>
#include<stdlib.h>
#define eps 0.000001
double coe[8];
int p,t;
double func(double x)
{
    int i;
    double res=0;
    for(i=0;i<=p;i++)
        res=res*x+coe[i];
    return res;
}
int main(){
double a,b;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&p);
    int i;
    for(i=0;i<=p;i++)
    {
        scanf("%lf",&coe[i]);
    }
    scanf("%lf%lf",&a,&b);
    while(fabs(b-a)>=eps)
        {if(func(a)*func((a+b)/2)<0)
        b=(a+b)/2;
    else if(func((a+b)/2)*func(b)<0)
        a=(a+b)/2;}
        printf("%.5lf\n",a+eps);

}
}
