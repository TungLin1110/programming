#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long int a,b,c,fin;
    while(t--)
    {
        scanf("%lli%lli%lli",&a,&b,&c);
        fin=1;
        for(i=1; i<=b; i*=2)
        {
            if(i&b) fin=fin*a%c;
            a=a*a%c;
        }
        printf("%lli\n",fin);
    }
}
