#include<stdio.h>
#include<string.h>
#include<iostream>
#define N 1000000
using namespace std;
int main()
{
    int t,temp,scorea,scoreb,acan,bcan,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int a[10]= {0};
        int b[10]= {0};
        // int c[10]={0};

        for(i=0; i<6; ++i)
        {
            scanf("%d",&temp);
            a[temp]++;
        }
        for(i=0; i<6; ++i)
        {
            scanf("%d",&temp);
            b[temp]++;
        }
        scorea = scoreb = 0;
        for(i = 0; i < N ; ++i)
        {
            int c[10]= {0};
            j = i;

            if(0 == j)c[0]++;
            else
            {

                while(j > 0)
                {
                    c[j%10]++;
                    j /= 10;
                }

            }
            for(j = 0,acan=1,bcan=1; j < 10; ++j)
            {
                if(c[j] > a[j])
                    acan = 0;
                if(c[j] > b[j])
                    bcan = 0;
                if(acan==0 && bcan==0)
                    break;
            }
            if(acan ==1&& bcan==0)
                scorea++;
            else if(acan==0 && bcan==1)
                scoreb++;
        }

        cout<<scorea<<" "<<scoreb<<endl;
    }


    return 0;
}
