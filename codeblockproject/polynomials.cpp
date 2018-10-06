#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr1[25]= {0};
        int arr2[25]= {0};
        int arr3[25]= {0};
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        arr1[0]=a;
        arr1[1]=b;
        arr1[2]=c;
        int da=d-1;
        int arrlen=3;
        while(da--)
        {
            for(int i=0; i<arrlen; i++)
            {
                arr3[i+2]=arr1[i]*c;
                arr2[i+1]=arr1[i]*b;
                arr1[i]=arr1[i]*a;
            }
            for(int i=0; i<arrlen+2; i++)
            {
                arr1[i]=arr1[i]+arr2[i]+arr3[i];
            }
            arrlen=arrlen+2;
        }
        for(int i=0; i<2*d+1; i++)
        {
            if(i!=2*d)
                cout<<arr1[i]<<" ";
            else
                cout<<arr1[i];
        }
        if(t!=0)
            cout<<endl;
    }
}
