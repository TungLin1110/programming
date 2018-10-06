#include<iostream>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    int Narr[100010];
    for(int i=1; i<=N; i++)
    {
        cin>>Narr[i];
    }

    while(K--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        int cnt=0;
        for(int i=a; i<=b; i++)
        {
            cnt=cnt+Narr[i];
        }
        if(K!=0)
            cout<<cnt<<endl;
        else
            cout<<cnt;
    }


}
