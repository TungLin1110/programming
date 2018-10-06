#include<string.h>
#include<stdio.h>
int main()
{
    //int  temp;
    int i,j;
    int tempint;
    int cnt;
    int flag;
    int sum;
    i=tempint=cnt=flag=sum=0;
    int req[1210]= {0};
    char a[300]= {'\0'};
    while(gets(a)!=NULL)
    {

        for(j=0; j<strlen(a); j++)
        {
            if(a[j]!=' '&&a[j]!='\n'&&a[j]!=',')
            {
                if(a[j]=='-')
                    flag=1;
                else if(a[j]-'0'<=9&&a[j]-'0'>=0)
                    tempint=tempint*10+a[j]-'0';
                //printf("%d ",tempint);
            }

            if(a[j]==' '||a[j]==',')
            {
                if(flag==1)
                    req[cnt]=tempint*-1;
                else
                    req[cnt]=tempint;
                cnt++;
                flag=tempint=0;
            }
        }
        if(flag==1)
            req[cnt]=tempint*(-1);
        else
            req[cnt]=tempint;
        cnt++;
        /*
        for( i=0; i<cnt; i++)
                printf("%d ",req[i]);
                printf("%d ",cnt);
        */
        for( i=0; i<cnt; i++)
            sum+=req[i];
        printf("%d\n",sum);
        tempint=cnt=sum=flag=0;
        memset(req,0,sizeof(req));
    }
}
