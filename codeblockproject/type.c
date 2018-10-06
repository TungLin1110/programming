/*#include<stdio.h>
#include<ctype.h>
int main()
{
int totl=0,tolw=0,wc=1,state=0,in=0,out=1,i,j,min=9999,max=0;
int a[10000]={0};
a[min]=9999;
a[max]=0;
char c;
printf("aa\n");
while(c=getchar())
{
   /* totl++;
    if(isalpha&&state==in){
        printf("%c",c);
        state=out;
        wc++;
    }
    else if(state=out)
    {
        if(c==' '||c=='\n'||c=='\t')
        {
            printf("\n");
            state=in;
        }
    }
    for(i=65;i<=90;i++)
    {
        if(c==i||c==i+32){
            a[i]++;
        }
    }

    if(isalpha(c))
    {
        printf("y");
    }
    else if(c==' '||c=='\n'||c=='\t')
    {printf("n");}
}
}
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char t;

    while (t = getchar()) {
        if (t == EOF) {
            break;
        }

        if (t == '\n') {
            continue;
        }

        if (isalpha(t)) {
            printf("對，是字母...\n");
        }
        else {
            printf("不是字母喔...\n");
        }
    }

    return 0;
}
