#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 3010
int main()
{
    int t,i,j,lenre,lentemp,k;
    scanf("%d",&t);
    while(t--)
    {
        int M;
        char result[N]= {'\0'};
        char temp[N]= {'\0'};
        scanf("%d",&M);
        scanf("%s",result);
        //lenre=strlen(result);
        for(i=0; i<M-1; i++)
        {
            scanf("%s",temp);
            lenre=strlen(result);
            lentemp=strlen(temp);
            k=(lenre>lentemp)?lentemp:lenre;
            while(k>0)
            {
                if(strncmp(result+lenre-k,temp,k)==0)
                    break;
                k--;
            }
            strcat(result,temp+k);
        }
        printf("%d\n%s\n",strlen(result),result);
    }
}
