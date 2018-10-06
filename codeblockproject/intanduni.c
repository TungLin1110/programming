#include<stdio.h>
#include<string.h>
int main()
{
    char U[53]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
                };
    int U_fin[53]= {0};
    int UA[53]= {0};
    int UB[53]= {0};
    char eng[55][1000]= {'\0'};
    int n,m,i,j;
    scanf("%D%D",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%s",eng[i]);
    }
    for(i=0; i<m; i++)
    {
        char sign;
        int a,b,temp,flag;
        scanf("%d\n%c\n%d",&a,&sign,&b);
        for(j=0; j<strlen(eng[a]); j++)
        {
            temp=(eng[a][j]>95)?eng[a][j]-'a'+26:eng[a][j]-'A';
            if(UA[temp]==0)
            {
                UA[temp]++;
            }
        }
        for(j=0; j<strlen(eng[b]); j++)
        {
            temp=(eng[b][j]>95)?eng[b][j]-'a'+26:eng[b][j]-'A';
            if(UB[temp]==0)
            {
                UB[temp]++;
            }
        }
        for(j=0; j<53; j++)
        {
            U_fin[j]=UA[j]+UB[j];
        }
        flag=0;
        if(sign=='+')
        {
            for(j=0; j<53; j++)
            {
                if(U_fin[j]>0)
                {
                    printf("%c",U[j]);
                    flag=1;
                }
            }
            if(flag==0)
                printf("-1");
            if(i!=m-1)
                printf("\n");
        }
        if(sign=='*')
        {
            for(j=0; j<53; j++)
            {
                if(U_fin[j]>1)
                {
                    printf("%c",U[j]);
                    flag=1;
                }
            }
            if(flag==0)
                printf("-1");
            if(i!=m-1)
                printf("\n");
        }
        memset(U_fin,0,sizeof(U_fin));
        memset(UA,0,sizeof(UA));
        memset(UB,0,sizeof(UB));
    }
}
