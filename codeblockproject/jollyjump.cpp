#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool jolly;
        jolly=true;
        int arr[3010]= {0};
        int flag[3010]= {0};
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++)
        {
            int num;
            if(arr[i]-arr[i+1]>0)
                num=arr[i]-arr[i+1];
            else
                num=arr[i+1]-arr[i];
            if(num>=n||num<=0)
                jolly=false;
            else
            {
                if(flag[num]==0)
                    flag[num]=1;
                else
                    jolly=false;
            }
        }
        if(jolly)
        {
            if(t!=0)
                cout<<"Jolly"<<endl;
            else
                cout<<"Jolly";
        }
        else
        {
            if(t!=0)
                cout<<"Not jolly"<<endl;
            else
                cout<<"Not jolly";
        }
    }
}
