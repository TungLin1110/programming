#include<stdio.h>
int main()
{
    int m,n,o,k;
    int maxn=0;
    int countn=1;
    int c=0;
    int a,b;
    while(2==scanf("%d%d",&m,&o))
    {
        if(m==0&&o==0)
            break;
        if(m>o)
        {
           a=m;
           b=o;
        }
        else{a=o;
        b=m;}
        countn=1;
        maxn=0;

        for(k=b; k<=a; k++)
        {
            n=k;
            countn=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else if(n%2==1)
                {
                    n=3*n+1;
                }
                countn++;
            }
            if(countn>maxn)
            {
                maxn=countn;
            }
        }


            printf("%d %d %d\n",m,o,maxn);

    }
}
