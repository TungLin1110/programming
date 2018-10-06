#include<cstdio>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int ca[10]={0},cb[10]={0};
    for(int i=0;i<6;i++)
    {
        int num;
        scanf("%d",&num);
        ca[num]++;
    }
    for(int i=0;i<6;i++)
    {
        int num;
        scanf("%d",&num);
        cb[num]++;
    }
    int aa=0,ab=0;
    if(ca[0]==0&&cb[0]!=0)ab++;
    if(ca[0]!=0&&cb[0]==0)aa++;
    for(int i=1;i<1000000;i++)
    {
        int de[10]={0};
        int ur=i;
        while(ur>0){
            de[ur%10]++;
            ur/=10;
        }

    bool oa=true,ob=true;
    for(int i=0;i<10;i++){
        if(de[i]>ca[i])oa=false;
        if(de[i]>cb[i])ob=false;
    }
    if(oa!=ob){
        if(oa)aa++;
            else ab++;
    }
    }
    printf("%d %d\n",aa,ab);
}
}
