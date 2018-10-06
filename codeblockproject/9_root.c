#include<stdio.h>
#include<math.h>
double f(int pp,double xx,double c[]);
void root(double ra,double rb);
int p;
double ar[10];
int main()
{
    int t,i,j,k;
    double x,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        for(i=0; i<=p; i++)
        {
            scanf("%lf",&ar[i]);
        }
        scanf("%lf%lf",&a,&b);
        root(a,b);
    }
}
double f(int pp,double xx,double c[])
{
    int i,j;
    double ans=0;
    for(i=pp,j=0; i>=0; i--)
    {
        ans=ans+c[j++]*pow(xx,i);
    }
    return ans;
}
void root(double ra,double rb)
{
    double rx = (ra+rb)/2;
    double abs;
    if(f(p,rx,ar)>0)
        abs=f(p,rx,ar);
    else
        abs=-f(p,rx,ar);

    if(abs < 0.000001)
    {
        printf("%.5lf\n",rx);
        return ;
    }
    if(f(p,ra,ar)*f(p,rx,ar) < 0)
    {
        root(ra,rx);
    }
    else
    {
        root(rx,rb);
    }
}
