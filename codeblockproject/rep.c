#include<stdio.h>
#include<string.h>
#define N 10100
int main()
{
    int t,alen,blen,clen;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char a[N]= {'\0'};
        char b[N]= {'\0'};
        char c[N]= {'\0'};
        char temp[N]= {'\0'};
        char *pa;
        pa=a;

        fgets(a,10000,stdin);
        alen=strlen(a)-1;
        fgets(b,10000,stdin);
        blen=strlen(b)-1;
        fgets(c,10000,stdin);
        clen=strlen(c)-1;
        //printf("%d %d %d",alen,blen,clen);
        b[strlen(b) - 1] = '\0';
        c[strlen(c) - 1] = '\0';        //去除最後的換行字元
        char *s;
        while((s=strstr(pa,b))!=NULL)
        {
            *s='\0';
            printf("%s%s",pa,c);
            pa=s+blen;
        }
        printf("%s",pa);
    }
}
