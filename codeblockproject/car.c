#include<stdio.h>
#include<string.h>
int SIZE=102;

struct big_int{
    int num[102];
    int length;
}a,b,c;

int main(){

    int T;
    char tempa[SIZE],tempb[SIZE];
    int i,j;

    scanf("%d%*c",&T);
    while(T--){
        memset(a.num,0,sizeof(a.num));
        memset(b.num,0,sizeof(b.num));
        memset(c.num,0,sizeof(c.num));
        scanf("%s%s",tempa,tempb);
        for(i = 0,a.length = strlen(tempa);i < a.length;++i){
            a.num[i] = tempa[a.length-i-1]-'0';
        }
        for(i = 0,b.length = strlen(tempb);i < b.length;++i){
            b.num[i] = tempb[b.length-i-1]-'0';
        }
        for(i = 0,c.length = a.length>b.length?a.length:b.length;i < c.length;++i){
            c.num[i] += a.num[i]+b.num[i];
            c.num[i+1] += c.num[i]/10;
            c.num[i] %= 10;
        }

        if(0 != c.num[c.length])c.length++;
        if(1==c.length && c.num[0] = 0)printf("0\n");
        else{
            for(i = c.length-1;i >= 0;--i){
                printf("%1d",c.num[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
