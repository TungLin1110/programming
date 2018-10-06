#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x[1100],y[1100];
        int flag[1100]= {0};
        int min=800000000;
        int mindis=800000000;
        int dis=0;
        int f,j;

        x[0]=y[0]=0;
        flag[0]=1;

        int N;
        cin>>N;
        for(int i=1; i<=N; i++)
        {
            cin>>x[i]>>y[i];
        }

        j=0;
        int aa=0;
        int k=N;
        while(k--)
        {
            min=mindis=800000000;
            for(int i=1; i<=N; i++)
            {
                if((pow(abs(x[j]-x[i]),2)+pow(abs(y[j]-y[i]),2)<min)&&(flag[i]==0))
                {
                    min=pow(abs(x[j]-x[i]),2)+pow(abs(y[j]-y[i]),2);
                    mindis=abs(x[j]-x[i])+abs(y[j]-y[i]);
                    aa=i;
                }
            }
            j=aa;
            dis=dis+mindis;
            flag[j]=1;
        }
        cout<<dis<<endl;
    }
}
