#include<iostream>
#define N 1000000
using namespace std;
int main()
{
    int t,scorea,scoreb,k;
    int a[10]= {0};
    int atemp[6]= {0};
    int b[10]= {0};
    int btemp[6]= {0};

    bool acan,bcan;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<6; i++)
        {
            cin>>atemp[i];
        }
        for(int i=0; i<6; i++)
        {
            a[atemp[i]]++;
        }
        for(int i=0; i<6; i++)
        {
            cin>>btemp[i];
        }
        for(int i=0; i<6; i++)
        {
            b[btemp[i]]++;
        }
        scorea=scoreb=0;
        for(int i=0; i<N; i++)
        {
            int c[10]= {0};
            k=i;
            if(0 == k)c[0]++;
            else
            {
                while(k>0)
                {
                    c[k%10]++;
                    k /= 10;
                }
            }
            int j;
            for(j = 0,acan=true,bcan=true; j < 10; ++j)
            {
                if(c[j] > a[j])
                    acan = false;
                if(c[j] > b[j])
                    bcan = false;
                if(!acan && !bcan)
                    break;

            }
            if(acan && !bcan)scorea++;
            else if(!acan && bcan)scoreb++;
        }
        cout<<scorea<<" "<<scoreb<<endl;
    }
    return 0;
}
