#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int arr[110];
        int cntnum[110]= {0};
        int cnt=0;
        int a;
        while(cin>>a)
        {
            if(a!=-999)
                arr[cnt++]=a;
            else
                break;
        }
        for(int i=0; i<cnt; i++)
            for(int j=i; j<cnt; j++)
            {
                if(arr[j]>arr[i])
                {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        int num=0;
        for(int i=0; i<cnt; i++)
        {
            cntnum[num]++;
            if(arr[i]!=arr[i+1])
                num++;
        }



        for(int i=0, j=0; i<cnt; i++)
        {
            if(arr[i]!=arr[i+1])
                cout<<arr[i]<<" "<<cntnum[j++]<<endl;
        }
        if(t!=0)
            cout<<endl;
    }
}
