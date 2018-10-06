#include<stdio.h>
#include<string.h>
int main()
{
char line[1000],*to;
char s[]=" ,;";
int i,sum,x;
while(gets(line)!=NULL)
{
    i=sum=0;
    to=strtok(line,s);
    while(to!=NULL)
    {
        i++;
        sum+=atoi(to);
        to=strtok(NULL,s);
    }
    printf("%d\n",sum);
}
}
