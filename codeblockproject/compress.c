#include<stdio.h>
#include<string.h>
#define N 5000
int main()
{
int i,j,times,cnt;
    char str[N]= {'\0'};
    char temp;
    while(scanf("%s",str)!=EOF)
    {
        cnt=1;
        int len=strlen(str);
        temp=str[0];
        for(i=1;i<len;i++)
        {
            if(str[i]==temp)
            {
              cnt++;
            }
            else
            {
                printf("%d%c",cnt,temp);
                temp=str[i];
                cnt=1;
            }
        }
        printf("%d%c",cnt,temp);
        printf("\n");
    }
}
