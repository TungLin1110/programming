#include <iostream>
using namespace std;
int main()
{
    int d;
    long long int y,p;
    //int flag=0;
    while(cin>>d>>y>>p)
    {
        long long int tempre[d][d], result[d][d], tempv[d][d],temp[d][d];
        if(d==0 && y==0 && p==0)
            break;
        for(int x=0; x<d; x++)
        {
            for(int z=0; z<d; z++)
            {
                cin>>tempv[x][z];
                result[x][z]=0;
                temp[x][z]=tempre[z][x]=tempv[x][z]%=p;
            }
        }
        if(y==1)
        {
            for(int j=0; j<d; j++)
            {
                int start=0;
                for(int k=0; k<d; k++)
                {
                    cout<<temp[j][k];
                    if(start!=d-1)
                        cout<<" ";
                    start++;
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
                for(int x=0; x<d; x++)
                {
                    for(int z=0; z<d; z++)
                    {
                        long long int sum=0;
                        for(int i=0; i<d; i++)
                        {
                            sum+=((tempv[x][i]%p)*(tempv[i][z]%p))%p;
                        }
                        temp[x][z]=sum%p;
                    }
                }
                for(int x=0; x<d; x++)
                {
                    for(int z=0; z<d; z++)
                    {
                        tempv[x][z]=temp[x][z];
                    }
                }
            }
            start=1;
            if(y&1)
            {
                for(int j=0; j<d; j++)
                {
                    for(int k=0; k<d; k++)
                    {
                        long long int sum=0;
                        for(int i=0; i<d; i++)
                        {
                            sum+=((temp[j][i]%p)*(tempre[k][i]%p))%p;
                        }
                        result[j][k]=sum%p;
                    }
                }
                for(int j=0; j<d; j++)
                {
                    for(int k=0; k<d; k++)
                    {
                        tempre[j][k]=temp[k][j]=result[k][j];
                    }
                }
            }
            y>>=1;
        }
        for(int j=0; j<d; j++)
        {
            int start=0;
            for(int k=0; k<d; k++)
            {
                cout<<result[j][k];
                if(start!=d-1)
                    cout<<" ";
                start++;
            }
            cout<<"\n";
        }
    }
}
