#include<stdio.h>

int main()
{
    int cnt,n,m,i,j,arr[11];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        cnt=0;
        for(i=6; i>=0; i--)
        {
            arr[i]=m%10;
            m=m/10;
        }
        for(int i=0;i<7;i++)
        {
            if(arr[i+1]*10+arr[i]==n)
                cnt++;
        }
        printf("%d\n",cnt);
    }
}
