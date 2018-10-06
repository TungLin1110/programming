#include<stdio.h>
int hamd(int a,int b)
{
    int dis=0;
    int c=a^b;
    while(c)
    {
        dis++;
        c&=c-1;
    }
    return dis;
}
int main()
{
    int t,temp,i,j,maxd=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int num[510]= {0};
        maxd=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&num[i]);
        for(i=0; i<n-1; i++)
            for(j=i+1; j<n; j++)
            {
                temp=hamd(num[i],num[j]);
                if(temp>maxd)
                    maxd=temp;
            }
        //if(t!=0)
            printf("%d\n",maxd);
        //else
        //    printf("%d",maxd);

    }
}
