#include<stdio.h>
#include<string.h>
#define N 5000
int main()
{
    int i,j,times,cnt;
    char str[N]= {'\0'};
    char temp[N]= {'\0'};
    while(scanf("%s",str)!=EOF)
    {
        times=cnt=0;
        int len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]<60)
            {
                times=str[i]-'0';
            }
            else
            {
                temp[cnt++]=str[i];
            }
            if(str[i+1]<60)
            {
                for(j=0; j<times; j++)
                {
                    printf("%s",temp);
                }
                memset(temp,'\0',sizeof(temp));
                cnt=0;
            }
        }
        printf("\n");

    }
}
