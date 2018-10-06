#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int d;
    ll y,p;
    //int flag=0;
    while(cin>>d>>y>>p)
    {
        ll tempresult[d][d], result[d][d], tempverti[d][d], temphori[d][d],temp[d][d];
        if(d==0 && y==0 && p==0)
            break;
        //if(flag)
            //cout<<"\n";
        //++flag;
        for(int x=0;x<d;x++)
        {
            for(int z=0;z<d;z++)
            {
                cin>>tempverti[x][z];
                result[x][z]=0;
                temp[x][z]=tempresult[z][x]=temphori[z][x]=tempverti[x][z]%=p;
            }
        }
        if(y==1)
        {
            for(int j=0;j<d;j++)
            {
                int start=0;
                for(int k=0;k<d;k++)
                {
                    cout<<temp[j][k];
                    if(start!=d-1)
                    cout<<" ";
                    ++start;
                }
                cout<<"\n";
            }

        }
y--;
        int start=0;
        while(y)
        {
            if(start)
            {
                for(int x=0;x<d;x++)
                {
                    for(int z=0;z<d;z++)
                    {
                        ll sum=0;
                        for(int i=0;i<d;i++)
                        {
                            sum+=((tempverti[x][i]%p)*(temphori[z][i]%p))%p;
                        }
                        temp[x][z]=sum%p;
                        //cout<<temp[x][z]<<" ";
                    }
                    //cout<<"\n";
                }
                //cout<<"-\n";
                for(int x=0;x<d;x++)
                {
                    for(int z=0;z<d;z++)
                    {
                        temphori[z][x]=tempverti[x][z]=temp[x][z];
                    }
                }
            }
            start=1;
            if(y&1)
            {
                for(int j=0;j<d;j++)
                {
                    for(int k=0;k<d;k++)
                    {
                        ll sum=0;
                        for(int i=0; i<d;i++)
                        {
                            sum+=((temp[j][i]%p)*(tempresult[k][i]%p))%p;
                        }
                        result[j][k]=sum%p;
                        //cout<<result[j][k]<<" ";
                    }
                    //cout<<"\n";
                }
                //cout<<"\n";
                for(int j=0;j<d;j++)
                {
                    for(int k=0;k<d;k++)
                    {
                        tempresult[j][k]=result[k][j];
                    }
                }
            }
            y>>=1;
        }
        for(int j=0;j<d;j++)
        {
            int start=0;
            for(int k=0;k<d;k++)
            {
                cout<<result[j][k];
                if(start!=d-1)
                cout<<" ";
                ++start;
            }
            cout<<"\n";
        }
    }
    return 0;
}
