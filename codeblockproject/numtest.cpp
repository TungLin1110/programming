#include<iostream>
using namespace std;
int main()
{
    while(!cin.eof())
    {
        char n[3];
        char m[7];
        cin>>n>>m;
        cout<<n[0]<<endl;
        for(int i=0;i<2;i++)
            cout<<n[i];
        for(int i=0;i<7;i++)
            cout<<m[i];
    }
}
